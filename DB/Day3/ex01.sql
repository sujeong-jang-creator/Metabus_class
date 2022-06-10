USE WORLD;

-- 형변환 - cast(), convert()
SELECT CAST(NOW() AS SIGNED);
SELECT CONVERT(NOW(), SIGNED);
SELECT CAST(20220610 AS DATE);
SELECT CONVERT(20220610, DATE);

select count(null), sum(null), min(null), max(null);

SELECT DEPTNO, AVG(SAL)
FROM EMP;

SELECT DEPTNO, AVG(SAL)
FROM EMP
GROUP BY DEPTNO;

-- 문 : EMP테이블에서 부서별 최소 급여가 20번 부서의 최소 급여보다 많은 부서를 조회하라
SELECT ENAME, MIN(SAL), DEPTNO
FROM EMP
GROUP BY DEPTNO
HAVING MIN(SAL) > (SELECT MIN(SAL)
					FROM EMP
                    WHERE DEPTNO = 20);
                    
-- 문 : 업무가 SALESMAN인 최소 한 명 이상의 사원보다 급여를 많이 받는 사원의 이름, 급여, 업무를 조회하라 (subquery를 사용해서)
SELECT ENAME, SAL, JOB
FROM EMP
WHERE JOB != 'SALESMAN'
HAVING SAL > (SELECT MIN(SAL)
				FROM EMP
				WHERE JOB = 'SALESMAN');

-- 문 : FORD와 BLAKE 사원의 관리자 및 부서가 같은(동일한) 사원의 정보 조회
-- (단, FORD, BLAKE 사원정보는 결과에서 제외)
SELECT  ENAME, MGR, DEPTNO
FROM EMP
WHERE (MGR IN (SELECT MGR
				FROM EMP
				WHERE ENAME IN ('FORD', 'BLAKE')) OR DEPTNO IN
			(SELECT DEPTNO
            FROM EMP
            WHERE ENAME IN ('FORD', 'BLAKE')))
AND ENAME NOT IN ('FORD', 'BLAKE');

-- 문 : 소속 부서의 평균 급여보다 많은 급여를 받는 사원의 이름, 급여, 부서번호, 입사일, 업무정보를 저회하는 SQL문.
SELECT ENAME, SAL, DEPTNO, DATE(HIREDATE), JOB
FROM EMP E
WHERE SAL > (SELECT AVG(SAL)
			FROM EMP
			WHERE DEPTNO = E.DEPTNO)
ORDER BY DEPTNO ASC;

SELECT E.ENAME, E.SAL, E.DEPTNO, E.HIREDATE, E.JOB
FROM EMP E, (SELECT DEPTNO, AVG(SAL) AVG_SAL
			FROM EMP
            GROUP BY DENPTNO) E2		-- FROM 절의 SUBQUERY는 INLINE VIEW
WHERE E.SAL > E.AVG_SAL
AND E.DEPTNO = E2.DEPTNO;

-- 문 > join 사용하지 않고 subquery로 사원들의 소속부서번호와 소속 부서이름을 사원번호, 이름과 함께 출력결과
SELECT EMPNO, ENAME, DEPTNO,
	(SELECT DNAME
    FROM DEPT
    WHERE A.DEPTNO = DEPTNO) DNAME
FROM EMP A;

-- 문 > 사원번호와 이름, 사원의 부서 위치가 DALLAS 이면 TOP 출력하고 부서위치가 DALLAS가 아니면 BRENCH로 출력 하시오
SELECT EMPNO, ENAME, 
		(CASE WHEN DEPTNO = (SELECT DEPTNO
							FROM DEPT
                            WHERE LOC = 'DALLAS') THEN 'TOP'
			ELSE 'BRENCH' END) AS LOCATION
FROM EMP;

-- 문 > 사원이름, 부서번호, 급여, 소속부서의 평균연봉을 함께 출력
SELECT ENAME, DEPTNO, SAL, (SELECT ROUND(AVG(SAL), 1)
							FROM EMP
                            GROUP BY DEPTNO
                            HAVING A.DEPTNO = DEPTNO) AVG_SAL
FROM EMP A
ORDER BY DEPTNO;

-- 문 > 관리자인 사원들만 조회
SELECT ENAME, DEPTNO
FROM EMP
WHERE JOB = 'MANAGER';

SELECT EMPNO, ENAME
FROM EMP
WHERE EMPNO IN (SELECT MGR
				FROM EMP);
                
-- 문 > 전체 사원들의 급여 평균, 부서별 사원들의 급여 평균, 부서와 직무별 그룹핑한 사원들의 급여 평균을 단일 결과 집합으로 출력
SELECT DEPTNO, JOB, AVG(SAL)
FROM EMP
GROUP BY DEPTNO, JOB
UNION ALL
SELECT DEPTNO, NULL, AVG(SAL)
FROM EMP
GROUP BY DEPTNO
UNION ALL
SELECT NULL, '', AVG(SAL)
FROM EMP;

SELECT DEPTNO, JOB, AVG(SAL)
FROM EMP
GROUP BY DEPTNO, JOB WITH ROLLUP;

-- 문 > 70번 부서, MARKETING, 'SEOUL'데이터 추가
INSERT INTO DEPT VALUES (70, 'MARKETING', 'SEOUL');
SELECT * FROM DEPT;

-- 문 > 60번 부서, MIS 부서명 새 레코드 추가
INSERT INTO DEPT VALUES (60, 'MIS', NULL);
SELECT * FROM DEPT;

-- 문 > 6000, 'Kim', 입사날짜 오늘 새 레코드 추가
INSERT INTO EMP (EMPNO, ENAME, HIREDATE) VALUES (6000, 'Kim', NOW());
SELECT * FROM EMP;
                
INSERT INTO EMP (EMPNO, ENAME, DEPTNO) VALUES (7001, 'Lee', 50);

CREATE TABLE TEST (NAME VARCHAR(10), ADDRESS VARCHAR(50) DEFAULT 'seoul');

SELECT * FROM TEST;

INSERT INTO TEST (NAME) VALUES ('kim');
INSERT INTO TEST VALUES ('lee', 'inchon');
INSERT INTO TEST VALUES ('park', null);

SELECT * FROM TEST;

DROP TABLE TEST;
SELECT * FROM TEST;
SHOW TABLES;
            
CREATE TABLE NEW_EMP (
ID INT,
NAME VARCHAR(10));

INSERT INTO NEW_EMP
SELECT EMPNO, ENAME FROM EMP
WHERE ENAME LIKE '%A%';

SELECT * FROM NEW_EMP;

SELECT EMPNO, ENAME, SAL
FROM EMP;

-- 일시적인 Safe모드 해제
SET SQL_SAFE_UPDATES=0;

UPDATE EMP
SET SAL = 0;

SELECT * FROM EMP;

SHOW TABLE STATUS LIKE 'EMP';

DELETE FROM EMP;
SELECT * FROM EMP;

INSERT INTO EMP (EMPNO, ENAME, JOB, MGR, HIREDATE, SAL, COMM, DEPTNO) VALUES
(7369, 'SMITH', 'CLERK', 7902, '1980-12-17 00:00:00', 800, NULL, 20),
(7499, 'ALLEN', 'SALESMAN', 7698, '1981-02-20 00:00:00', 1600, 300, 30),
(7521, 'WARD', 'SALESMAN', 7698, '1981-02-22 00:00:00', 1250, 500, 30),
(7566, 'JONES', 'MANAGER', 7839, '1981-04-02 00:00:00', 2975, NULL, 20),
(7654, 'MARTIN', 'SALESMAN', 7698, '1981-09-28 00:00:00', 1250, 1400, 30),
(7698, 'BLAKE', 'MANAGER', 7839, '1981-05-01 00:00:00', 2850, NULL, 30),
(7782, 'CLARK', 'MANAGER', 7839, '1981-06-09 00:00:00', 2450, NULL, 10),
(7788, 'SCOTT', 'ANALYST', 7566, '1987-04-19 00:00:00', 3000, NULL, 20),
(7839, 'KING', 'PRESIDENT', NULL, '1981-11-17 00:00:00', 5000, NULL, 10),
(7844, 'TURNER', 'SALESMAN', 7698, '1981-09-08 00:00:00', 1500, 0, 30),
(7876, 'ADAMS', 'CLERK', 7788, '1987-05-23 00:00:00', 1100, NULL, 20),
(7900, 'JAMES', 'CLERK', 7698, '1981-12-03 00:00:00', 950, NULL, 30),
(7902, 'FORD', 'ANALYST', 7566, '1981-12-03 00:00:00', 3000, NULL, 20),
(7934, 'MILLER', 'CLERK', 7782, '1982-01-23 00:00:00', 1300, NULL, 10);
commit;

SELECT * FROM EMP;

START TRANSACTION;
SET SQL_SAFE_UPDATES=0;

UPDATE EMP
SET SAL = 0;

SELECT * FROM EMP;
ROLLBACK;
SELECT * FROM EMP;

-- 문 > 짝수 사번의 사원들의 급여를 10%인상 변경하시오
START TRANSACTION;

UPDATE EMP
SET SAL = ROUND(SAL*1.1, 2)
WHERE EMPNO % 2 = 0;
-- WHERE MOD(EMPNO, 2) = 0;

SELECT * FROM EMP;
ROLLBACK;
SELECT * FROM EMP;

-- 문 > DALLAS 위치의 부서에 근무하는 사원의 입사날짜를 현재 날짜로 변경하시오. EMP)

UPDATE EMP
SET HIREDATE = SYSDATE()
WHERE DEPTNO = (SELECT DEPTNO
				FROM DEPT
				WHERE LOC = 'DALLAS');

SELECT DEPTNO, HIREDATE FROM EMP;

-- 문 > 급여가 3000이상인 사원 레코드 삭제
START TRANSACTION;
DELETE FROM EMP WHERE SAL >= 3000;
SELECT * FROM EMP;

ROLLBACK;
SELECT * FROM EMP;

-- 문 SCOTT 사원과 동일한 부서번호의 사원들을 모두 삭제하시오
SELECT DEPTNO, ENAME FROM EMP ORDER BY DEPTNO ASC;

START TRANSACTION;
DELETE FROM EMP WHERE DEPTNO = (SELECT DEPTNO
								FROM (SELECT *
									FROM EMP) EMP2
								WHERE ENAME = 'SCOTT');
SELECT DEPTNO, ENAME FROM EMP ORDER BY DEPTNO ASC;
ROLLBACK;
SELECT DEPTNO, ENAME FROM EMP ORDER BY DEPTNO ASC;

select empno,ename
from emp m
where not exists(select 'X'
            from emp
            where m.empno=mgr);

select empno,ename
from emp
where not exists(select mgr
            from emp
            where mgr is not null);
            
CREATE DATABASE TESTDB;     -- admin 권한이 필요함
SHOW DATABASES;

DROP DATABASE TESTDB;   -- admin 권한이 필요함
SHOW DATABASES;

DROP TABLE IF EXISTS EMP_NEW;

CREATE TABLE EMP20 AS SELECT * FROM EMP WHERE DEPTNO=20;
DESC EMP20;
SELECT * FROM EMP20;

CREATE TABLE EMP_NEW
AS SELECT * FROM EMP;
DESC EMP_NEW;
SELECT * FROM EMP_NEW;

DROP TABLE IF EXISTS EMP_NEW;
CREATE TABLE EMP_NEW AS SELECT * FROM EMP WHERE 1=2;	-- WHERE 조건이 FALSE이므로 데이터 없이 구조만 복제

DESC EMP_NEW;
SELECT * FROM EMP_NEW;

CREATE TABLE COPY_EMP(
    EMPNO INT(4) NOT NULL,
    ENAME VARCHAR(15) NOT NULL,
    AGE INT(3),
    EMAIL VARCHAR(30)
);
SELECT * FROM INFORMATION_SCHEMA.TABLE_CONSTRAINTS; -- PRIMARY KEY, UNIQUE, FOREIGN KEY 제약조건 조회

INSERT INTO COPY_EMP
VALUES (2001, NULL, 30, 'kim@korea.com');	-- error

INSERT INTO COPY_EMP (AGE, EMAIL)
VALUES (29, 'Song@gmail.com');	-- error

drop table if exists copy_emp;

CREATE TABLE COPY_EMP(
    EMPNO INT(4) PRIMARY KEY,
    ENAME VARCHAR(15) NOT NULL,
    AGE INT(3),
    EMAIL VARCHAR(30)
);

SELECT * FROM INFORMATION_SCHEMA.TABLE_CONSTRAINTS
WHERE TABLE_NAME = 'COPY_EMP';
show index from copy_emp;

INSERT INTO COPY_EMP
VALUES (2001, 'Song', 29, 'Song@gmail.com');

SELECT * FROM COPY_EMP;

# UNIQUE 제약조건
DROP TABLE COPY_EMP;
SHOW INDEX FROM COPY_EMP;	-- 테이블이 삭제되면 종속객체 INDEX 삭제

CREATE TABLE COPY_EMP(
    EMPNO INT(4) UNIQUE,
    ENAME VARCHAR(15) NOT NULL,
    AGE INT(3),
    EMAIL VARCHAR(30)
);
SELECT * FROM INFORMATION_SCHEMA.TABLE_CONSTRAINTS
WHERE TABLE_NAME = 'COPY_EMP';
SHOW INDEX FROM COPY_EMP;

INSERT INTO COPY_EMP (ENAME, AGE, EMAIL)
VALUES ('Song', 29, 'Song@gmail.com');

INSERT INTO COPY_EMP (ENAME, AGE, EMAIL)
VALUES ('Park', 29, 'park@gmail.com');

SET UNIQUE_CHECKS=0;	-- UNIQUE 제약조건 비활성화

CREATE TABLE userinfo(
    userid VARCHAR(10),
    username VARCHAR(15),
    gender CHAR(1) CHECK (gender IN ('F','M')),
    age INT(2) CHECK (age>0 AND age <100) 
);

INSERT INTO userinfo VALUES ('a001', 'an', NULL, 20);
INSERT INTO userinfo VALUES ('a001', 'an', 'f', 20);
INSERT INTO userinfo VALUES ('a002', 'choi', 'M', 25);
INSERT INTO userinfo VALUES ('a002', 'choi', 'M', 0);

create table category (
 code  int(4),
 name  varchar(20)
);

insert into category values (1000, 'Music');
insert into category values (2000, 'Book');
insert into category values (3000, 'Game');
insert into category values (4000, 'Movie');

select * from category;

create table book (
isbn int(10) primary key,
title varchar(100),
author varchar(50),
price int(6),
code int(4),
constraint book_fk foreign key (code) references category(code));
-- category table을 참조하는데, 걔네가 foreign key 이런게 없음. 그래서 오류

DROP TABLE category;

create table category (
 code  int(4),
 name  varchar(20)
);

insert into category values (1000, 'Music');
insert into category values (2000, 'Book');
insert into category values (3000, 'Game');
insert into category values (4000, 'Movie');

select * from category;

show keys from book;

alter table category add constraint category_pk primary key (code);

create table book (
isbn int(10) primary key,
title varchar(100),
author varchar(50),
price int(6),
code int(4),
constraint book_fk foreign key (code) references category(code));

insert into book values (1, 'oracle', 'hufs', 10000, 2000);
insert into book values (2, 'packman', 'hufs', 3000, 5000); -- error. category에 5000이 없음.
insert into book values (3, 'with God', 'hufs', 11000, null);
