package com.kenzo47.todoapp.authentication.repository;

import com.kenzo47.todoapp.authentication.model.Role;
import org.springframework.data.jpa.repository.JpaRepository;

public interface RoleRepository extends JpaRepository<Role, Long>{
}