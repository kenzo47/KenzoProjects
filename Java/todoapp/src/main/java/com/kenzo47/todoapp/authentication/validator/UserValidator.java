package com.kenzo47.todoapp.authentication.validator;

import com.kenzo47.todoapp.authentication.model.User;
import com.kenzo47.todoapp.authentication.service.UserService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;
import org.springframework.validation.Errors;
import org.springframework.validation.ValidationUtils;
import org.springframework.validation.Validator;

@Component
public class UserValidator implements Validator {
    @Autowired
    private UserService userService;

    @Override
    public boolean supports(Class<?> aClass) {
        return User.class.equals(aClass);
    }

    @Override
    public void validate(Object o, Errors errors) {
        User user = (User) o;

        ValidationUtils.rejectIfEmptyOrWhitespace(errors, "username", "RequiredNotEmpty");
        if (user.getUsername().length() < 5 || user.getUsername().length() > 20) {
            errors.rejectValue("username", "Size.userForm.username");
        }
        if (userService.findByUsername(user.getUsername()) != null) {
            errors.rejectValue("username", "Duplicate.userForm.username");
        }

        ValidationUtils.rejectIfEmptyOrWhitespace(errors, "first_name", "RequiredNotEmpty");
        if (user.getFirst_name().length() < 3 || user.getFirst_name().length() > 20) {
            errors.rejectValue("first_name", "Size.userForm.first_name");
        }

        ValidationUtils.rejectIfEmptyOrWhitespace(errors, "last_name", "RequiredNotEmpty");
        if (user.getLast_name().length() < 3 || user.getLast_name().length() > 20) {
            errors.rejectValue("last_name", "Size.userForm.last_name");
        }

        ValidationUtils.rejectIfEmptyOrWhitespace(errors, "email", "RequiredNotEmpty");
        if (!isValidEmail(user.getEmail())) {
            errors.rejectValue("email", "Size.userForm.email");
        }
        if (userService.findByEmail(user.getEmail()) != null) {
            errors.rejectValue("email", "Duplicate.userForm.email");
        }

        ValidationUtils.rejectIfEmptyOrWhitespace(errors, "password", "RequiredNotEmpty");
        if (user.getPassword().length() < 8 || user.getPassword().length() > 32) {
            errors.rejectValue("password", "Size.userForm.password");
        }

        if (!user.getPasswordConfirm().equals(user.getPassword())) {
            errors.rejectValue("passwordConfirm", "Diff.userForm.passwordConfirm");
        }
    }

    public boolean isValidEmail(String email) {
        String regex = "^[\\w-_\\.+]*[\\w-_\\.]\\@([\\w]+\\.)+[\\w]+[\\w]$";
        return email.matches(regex);
    }
}