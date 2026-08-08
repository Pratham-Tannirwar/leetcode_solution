# Write your MySQL query statement below
SELECT user_id,
CONCAT(UPPER(LEFT(NAME,1)),LOWER(RIGHT(NAME,LENGTH(NAME)-1))) AS NAME
from USERS
ORDER BY user_id;