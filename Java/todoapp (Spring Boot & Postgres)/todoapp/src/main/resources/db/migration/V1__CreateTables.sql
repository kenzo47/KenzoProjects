CREATE TABLE users (
  id INT PRIMARY KEY,
  first_name VARCHAR(30) NOT NULL,
  last_name VARCHAR(30) NOT NULL,
  username VARCHAR(30) NOT NULL,
  password TEXT NOT NULL
);

CREATE TABLE todos (
  id SERIAL PRIMARY KEY,
  description VARCHAR(255) DEFAULT NULL,
  is_done BIT(1) NOT NULL,
  target_date TIMESTAMP DEFAULT NULL,
  username VARCHAR (30) NOT NULL,
  title VARCHAR(50) NOT NULL
);

--