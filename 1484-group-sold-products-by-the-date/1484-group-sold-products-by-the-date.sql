# Write your MySQL query statement below
SELECT SELL_DATE,COUNT(DISTINCT(PRODUCT)) AS NUM_SOLD,
GROUP_CONCAT(distinct product order by product separator ',') as products

FROM ACTIVITIES
GROUP BY SELL_DATE
ORDER BY SELL_DATE;