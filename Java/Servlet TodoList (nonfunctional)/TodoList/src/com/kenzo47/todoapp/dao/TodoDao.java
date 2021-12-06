package com.kenzo47.todoapp.dao;

import com.kenzo47.todoapp.model.Todo;

import java.sql.SQLException;
import java.util.List;

public abstract interface TodoDao {

    void insertTodo(Todo todo) throws SQLException;

    Todo selectTodo(long todoId);

    List<Todo> selectAllTodos();

    boolean deleteTodo(int id) throws SQLException;

    boolean updateTodo(Todo todo) throws SQLException;
}
