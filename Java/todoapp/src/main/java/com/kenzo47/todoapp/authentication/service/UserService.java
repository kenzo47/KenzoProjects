package com.kenzo47.todoapp.authentication.service;

import com.kenzo47.todoapp.authentication.model.User;

public interface UserService {
    void save(User user);

    User findByUsername(String username);

    User findByEmail(String email);
}