select length('korea'), length('대한민국');

-- initcap은 mysql 에서 지원 안함.
select upper("korea"), initcap("hello world"), lower('KOREA');

-- left는 len길이만큼 왼쪽에 있는 문자열 반환. substring은 n번째 자리부터 문자열 출력. concat은 이어붙이기
SELECT CONCAT(UPPER(LEFT('hello', 1)), SUBSTRING('hello', 2), UPPER(LEFT('world', 1)), SUBSTRING('world', 2));

select substr('hello world',7),substr('hello world',3,5),substr('hello world',-5,3);
select instr("hello world",'e'),instr('hello world',6),instr('hello world','o',1,2);
select length('   hello    '),length(trim('  hello  '));
select 12345.67 , lpad(12345.67,10,'$'),rpad(12345.67,10,'*');
select sal, rpad(sal ,10,'*'),lpad(sal,10,"*") from emp;

SELECT EMPNO, ENAME, JOB, SAL, DEPTNO
FROM EMP
WHERE substring(ENAME, 1, 1) > 'K' AND substr(ENAME, 1, 1) < 'Y'
ORDER BY ename;

SELECT EMPNO, ENAME, JOB, HIREDATE, SAL, DEPTNO
FROM EMP;

-- EMP 테이블에서 사번이 홀수인 사원만 검색
SELECT EMPNO, ENAME, JOB, HIREDATE, SAL, DEPTNO
FROM EMP
WHERE MOD(EMPNO, 2) = 1
ORDER BY EMPNO;

SELECT FORMAT(123.1234, 2);
-- BIN : 2진수 / HEX : 16진수 / OCT : ?
SELECT BIN(31), HEX(31), OCT(31);
SELECT INSERT('가나다라마', 2, 3, '@@@');
SELECT LEFT('가나다라마바', 3), RIGHT('가나다라마바', 3);
SELECT REPEAT('abc', 3);
SELECT REVERSE ('가나다');