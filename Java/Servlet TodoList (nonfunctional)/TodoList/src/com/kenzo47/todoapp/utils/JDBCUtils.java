package com.kenzo47.todoapp.utils;

import java.sql.Connection;
import java.sql.Date;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.time.LocalDate;

public class JDBCUtils {

    private static String connectionString = "jdbc:mysql://localhost:3306/todo";
    private static String databaseUsername = "tomcatboy";
    private static String databasePassword = "Kappa123";

    public static Connection getConnection(){
        Connection connection = null;
        try {
            Class.forName("com.mysql.jdbc.Driver");
            connection = DriverManager.getConnection(connectionString, databaseUsername, databasePassword);
        } catch (SQLException ex){
            //Handle exception
            ex.printStackTrace();
        } catch (ClassNotFoundException ex){
            //Handle exception
            ex.printStackTrace();
        }
        return connection;
    }

    public static void printSQLException(SQLException ex){
        for (Throwable e: ex){
            if (e instanceof SQLException){
                e.printStackTrace();
                System.err.println("SQLState: " + ((SQLException) e).getSQLState());
                System.err.println("Error Code: " + ((SQLException) e).getErrorCode());
                System.err.println("Message: " + e.getMessage());
                Throwable t = ex.getCause();
                while (t != null){
                    System.out.println("Cause: " + t);
                    t = t.getCause();
                }
            }
        }
    }

    public static Date getSQLDate(LocalDate date){
        return java.sql.Date.valueOf(date);
    }

    public static LocalDate getUtilDate(Date sqlDate){
        return sqlDate.toLocalDate();
    }
}
