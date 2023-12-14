-- Create databse and table
-- id: auto generated, can't be null and is primary key
CREATE DATABASE IF NOT EXISTS hbtn_0d_usa;
CREATE TABLE IF NOT EXISTS states (
    id INT UNIQUE NOT NULL AUTO_INCREMENT,
    name VARCHAR(256)
    );
