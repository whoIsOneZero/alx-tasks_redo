-- Create a table 
-- db name passed as an arg to the `mysql` command
CREATE TABLE IF NOT EXISTS unique_id (
    id INT DEFAULT "1" UNIQUE,
    name VARCHAR(256)
    );
