package com.kenzo47.todoapp.service;

import com.kenzo47.todoapp.model.User;

public interface UserService {
    void save(User user);

    User findByUsername(String username);
}
