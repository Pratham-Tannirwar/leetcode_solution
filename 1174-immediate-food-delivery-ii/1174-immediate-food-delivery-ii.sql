# Write your MySQL query statement below
SELECT 
    ROUND(avg(IF(min_order_date =DELIVERY_DATE , 1, 0)) * 100 , 2) AS immediate_percentage 
FROM
(select DELIVERY_ID,
CUSTOMER_ID,
MIN(ORDER_DATE) AS MIN_ORDER_DATE,
MIN( customer_pref_delivery_date) AS DELIVERY_DATE
FROM DELIVERY
GROUP BY CUSTOMER_ID) AS NEW_TABLE;