package com.kenzo47.todoapp.dao;

import com.kenzo47.todoapp.model.Todo;
import com.kenzo47.todoapp.utils.JDBCUtils;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.time.LocalDate;
import java.util.ArrayList;
import java.util.List;

public class TodoDaoImplementation implements TodoDao {

    private static final String INSERT_TODOS_SQL = "INSERT INTO todos (title, username, description, target_date, is_done) VALUES (?, ?, ?, ?, ?);";
    private static final String SELECT_TODO_BY_ID = "select id, title, username, description, target_date, is_done from todos where id = ?;";
    private static final String SELECT_ALL_TODOS = "select * from todos;";
    private static final String DELETE_TODO_BY_ID = "delete from todos where id = ?;";
    private static final String UPDATE_TODO = "update todos set title = ?, username = ?, description = ?, target_date = ?, is_done = ? where id = ?;";

    @Override
    public void insertTodo(Todo todo) throws SQLException {
        System.out.println(INSERT_TODOS_SQL);
        try (Connection connection = JDBCUtils.getConnection(); PreparedStatement preparedStatement = connection.prepareStatement(INSERT_TODOS_SQL)) {
            preparedStatement.setString(1, todo.getTitle());
            preparedStatement.setString(2, todo.getUsername());
            preparedStatement.setString(3, todo.getDescription());
            preparedStatement.setDate(4, JDBCUtils.getSQLDate(todo.getTargetDate()));
            preparedStatement.setBoolean(5, todo.getStatus());
            System.out.println(preparedStatement);
            preparedStatement.executeUpdate();
        } catch (SQLException ex){
            JDBCUtils.printSQLException(ex);
        }
    }

    @Override
    public Todo selectTodo(long todoId) {
        Todo todo = null;
        try (Connection connection = JDBCUtils.getConnection(); PreparedStatement preparedStatement = connection.prepareStatement(SELECT_TODO_BY_ID);){
            preparedStatement.setLong(1, todoId);
            System.out.println(preparedStatement);
            ResultSet resultSet = preparedStatement.executeQuery();

            while (resultSet.next()) {
                long id = resultSet.getLong("id");
                String title = resultSet.getString("title");
                String username = resultSet.getString("username");
                String description = resultSet.getString("description");
                LocalDate targetDate = resultSet.getDate("target_date").toLocalDate();
                boolean isDone = resultSet.getBoolean("is_done");
                todo = new Todo(id, title, username, description, targetDate, isDone);
            }
        } catch (SQLException ex) {
            JDBCUtils.printSQLException(ex);
        }
        return todo;
    }

    @Override
    public List<Todo> selectAllTodos() {
        List<Todo> todos = new ArrayList<>();

        try (Connection connection = JDBCUtils.getConnection(); PreparedStatement preparedStatement = connection.prepareStatement(SELECT_ALL_TODOS);) {
            System.out.println(preparedStatement);
            ResultSet resultSet = preparedStatement.executeQuery();

            while (resultSet.next()) {
                long id = resultSet.getLong("id"); //remove duplicate code
                String title = resultSet.getString("title");
                String username = resultSet.getString("username");
                String description = resultSet.getString("description");
                LocalDate targetDate = resultSet.getDate("target_date").toLocalDate();
                boolean isDone = resultSet.getBoolean("is_done");
                todos.add(new Todo(id, title, username, description, targetDate, isDone));
            }
        } catch (SQLException ex) {
            JDBCUtils.printSQLException(ex);
        }
        return todos;
    }

    @Override
    public boolean deleteTodo(int id) throws SQLException {
        boolean rowDeleted;
        try (Connection connection = JDBCUtils.getConnection(); PreparedStatement preparedStatement = connection.prepareStatement(DELETE_TODO_BY_ID)) {
            preparedStatement.setInt(1, id);
            rowDeleted = preparedStatement.executeUpdate() > 0;
        }
        return rowDeleted;
    }

    @Override
    public boolean updateTodo(Todo todo) throws SQLException {
        boolean rowUpdated;
        try (Connection connection = JDBCUtils.getConnection(); PreparedStatement preparedStatement = connection.prepareStatement(UPDATE_TODO)) {
            preparedStatement.setString(1, todo.getTitle());
            preparedStatement.setString(2, todo.getUsername());
            preparedStatement.setString(3, todo.getDescription());
            preparedStatement.setDate(4, JDBCUtils.getSQLDate(todo.getTargetDate()));
            preparedStatement.setBoolean(5, todo.getStatus());
            preparedStatement.setLong(6, todo.getId());
            rowUpdated = preparedStatement.executeUpdate() > 0;
        }
        return rowUpdated;
    }
}
