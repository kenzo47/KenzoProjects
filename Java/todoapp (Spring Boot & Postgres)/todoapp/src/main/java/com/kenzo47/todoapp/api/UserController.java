package com.kenzo47.todoapp.api;

import com.kenzo47.todoapp.model.User;
import com.kenzo47.todoapp.service.SecurityService;
import com.kenzo47.todoapp.service.UserService;
import com.kenzo47.todoapp.service.UserServiceImplementation;
import com.kenzo47.todoapp.validator.UserValidator;
import org.dom4j.rule.Mode;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.validation.BindingResult;
import org.springframework.web.bind.annotation.*;

import javax.validation.Valid;
import javax.validation.constraints.NotNull;
import java.util.List;
import java.util.Optional;

//@RequestMapping("api/user")
//@RestController
@Controller
public class UserController {

    private final UserServiceImplementation userServiceImplementation;

    @Autowired
    private UserService userService;

    @Autowired
    private SecurityService securityService;

    @Autowired
    private UserValidator userValidator;

    @GetMapping("registration")
    public String registration(Model model) {
        model.addAttribute("userForm", new User());

        return "registration";
    }

    @PostMapping("registration")
    public String registration(@ModelAttribute("userForm") User userForm, BindingResult bindingResult) {
        userValidator.validate(userForm, bindingResult);

        if (bindingResult.hasErrors()) {
            return "registration";
        }

        userService.save(userForm);

        securityService.autoLogin(userForm.getUsername(), userForm.getPassword());

        return "redirect:/welcome";
    }

    @GetMapping("login")
    public String login(Model model, String error, String logout) {
        if (error != null) {
            model.addAttribute("error", "Your username and password is invalid");
        }

        if (logout != null) {
            model.addAttribute("message", "You have been logged out successfully." );
        }

        return "login";
    }

    @GetMapping({"/", "/welcome"})
    public String welcome(Model model) {
        return "welcome";
    }

    @Autowired
    public UserController(UserServiceImplementation userService) {
        this.userServiceImplementation = userService;
    }

    @PostMapping
    public void addUser(@Valid @NotNull @RequestBody User user) {
        userServiceImplementation.addUser(user);
    }

    @GetMapping
    public List<User> getAllUsers() {
        return userServiceImplementation.getAllUsers();
    }

    @GetMapping(path = "{id}")
    public Optional<User> selectUserById(@PathVariable int id) {
        return userServiceImplementation.getUserById(id);
    }

    @DeleteMapping(path = "{id}")
    public int deleteUserById(@PathVariable int id) {
        return userServiceImplementation.deleteUserById(id);
    }

    @PutMapping(path = "{id}")
    public int updateUserById(@PathVariable int id, @Valid @NotNull @RequestBody User user) {
        return userServiceImplementation.updateUserById(id, user);
    }

}
