/*从一个表里面筛选大于五个学生上的课*/
/*解1*/
SELCET a/*表的；别名*/.class/*字段（列名）*/ FROM 
	       (SELCET c.class, count(c.class) cou
	       FROM
	       (SELCET distinct* FROM courses) AS c
	       GROUP BY c.class) AS a
	       WHERE a.cou >= 5
/*解2*/
SELECT c/*表的别名*/.class/*表的字段（列名）*/ FROM
		courses/*表名*/ c/*指定别名*/
		GROUP BY/*针对表中列相同的项进行分类*/ c.class /*指明要分类的列*/
		HAVING COUNT/*筛选大于等于5的学生*/(DISTINCT/*过滤掉相同值，返回过滤的条数*/(c.student)) >= 5


/***********************************
 *		声明
 *	案例为摘录，学习使用。
 *	如有问题请联系本人.
 *
 *
 * **********************************/
