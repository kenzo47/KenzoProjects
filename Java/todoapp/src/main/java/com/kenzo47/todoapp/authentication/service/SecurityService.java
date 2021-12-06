package com.kenzo47.todoapp.authentication.service;


public interface SecurityService {
    String findLoggedInUsername();

    void autoLogin(String username, String password);
}