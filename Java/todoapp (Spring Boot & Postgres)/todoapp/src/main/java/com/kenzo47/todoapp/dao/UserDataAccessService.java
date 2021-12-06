package com.kenzo47.todoapp.dao;

import com.kenzo47.todoapp.model.User;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.jdbc.core.JdbcTemplate;
import org.springframework.jdbc.core.PreparedStatementSetter;

import org.springframework.stereotype.Repository;

import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.List;
import java.util.Optional;

@SuppressWarnings("ALL")
@Repository("postgres")
public class UserDataAccessService implements UserDao {

    private final JdbcTemplate jdbcTemplate;
    private static int count = 1;

    @Autowired
    public UserDataAccessService(JdbcTemplate jdbcTemplate) {
        this.jdbcTemplate = jdbcTemplate;
    }

    @Override
    public int insertUser(User user) {
        final String insertStatement = "INSERT INTO users (id, first_name, last_name, username, password) " +
                "VALUES (?, ?, ?, ?, ?);";
        jdbcTemplate.update(insertStatement, new PreparedStatementSetter() {
            @Override
            public void setValues(PreparedStatement preparedStatement) throws SQLException {
                preparedStatement.setInt(1, count);
                preparedStatement.setString(2, user.getFirst_name());
                preparedStatement.setString(3, user.getLast_name());
                preparedStatement.setString(4, user.getUsername());
                preparedStatement.setString(5, user.getPassword());
            }
        });
        count++;
        return 1;
    }

    @Override
    public List<User> selectAllUsers() {
        final String selectStatement = "SELECT id, first_name, last_name, username FROM users";
        return jdbcTemplate.query(selectStatement, (resultSet, i) -> {
            int id = resultSet.getInt("id");
            String first_name = resultSet.getString("first_name");
            String last_name = resultSet.getString("last_name");
            String username = resultSet.getString("username");
            return new User(id, first_name, last_name, username, "-REMOVED-");
        });
    }

    public Optional<User> selectUserById(int id) {
        final String selectStatement = "SELECT id, first_name, last_name, username FROM users WHERE id = ?;";
        User user = jdbcTemplate.queryForObject(selectStatement, new Object[]{id}, (resultSet, i) -> {
            //int userId = resultSet.getInt("id");
            String first_name = resultSet.getString("first_name");
            String last_name = resultSet.getString("last_name");
            String username = resultSet.getString("username");
            return new User(id, first_name, last_name, username, "-REMOVED-");
        });
        return Optional.ofNullable(user);
    }

    @Override
    public int deleteUserById(int id) {
        final String deleteStatement = "DELETE FROM users WHERE id = " + id + ";";
        jdbcTemplate.execute(deleteStatement);
        return 1;
    }

    @Override
    public int updateUserById(int id, User user) {
        final String updateStatement = "UPDATE users SET first_name = ?, " +
                "last_name = ?, " +
                "username = ?, " +
                "password = ? " +
                "WHERE id = ?;";
        jdbcTemplate.update(updateStatement, new PreparedStatementSetter() {
            @Override
            public void setValues(PreparedStatement preparedStatement) throws SQLException {
                preparedStatement.setString(1, user.getFirst_name());
                preparedStatement.setString(2, user.getLast_name());
                preparedStatement.setString(3, user.getUsername());
                preparedStatement.setString(4, user.getPassword());
                preparedStatement.setInt(5, id);
            }
        });
        return 1;
    }


}
