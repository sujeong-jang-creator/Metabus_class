-- 문제1) EMP 테이블에서 scott의 사원번호, 성명, 담당업무(소문자로), 부서번호를 출력하여라.
SELECT EMPNO AS 사원번호, ENAME AS 성명, LOWER(JOB) AS 담당업무, DEPTNO AS 부서번호
FROM EMP
WHERE ENAME='SCOTT';

-- 문제2) EMP 테이블에서 scott의 사원번호, 성명, 담당업무, 부서번호를 출력하여라.
SELECT EMPNO AS 사원번호, ENAME AS 성명, JOB AS 담당업무, DEPTNO AS 부서번호
FROM EMP
WHERE ENAME='SCOTT';

-- 문제3) DEPT 테이블에서 컬럼의 첫 글자들만 대문자로 변화하여 모든 정보를 출력하여라.
SELECT DEPTNO,
	CONCAT(UPPER(LEFT(DNAME, 1)),LOWER(SUBSTR(DNAME, 2))) AS DEPTNO,
    CONCAT(UPPER(LEFT(LOC, 1)),LOWER(SUBSTR(LOC, 2))) AS LOC
FROM DEPT;

-- 문제4) EMP 테이블에서 이름의 첫글자가 'K'보고 크고 'Y'보다 작은 사원의 사원번호, 이름, 업무, 급여, 부서번호를 출력하여라.
SELECT EMPNO AS 사원번호,
	ENAME AS 이름,
    JOB AS 업무,
    SAL AS 급여,
    DEPTNO AS 부서번호
FROM EMP
WHERE LEFT(ENAME, 1) > 'K' AND LEFT(ENAME, 1) < 'Y';

-- 문제5) EMP 테이블에서 부서가 20번인 사원의 사원번호, 이름, 이름의 자릿수, 급여, 급여의 자릿수를 출력하여라.
SELECT EMPNO AS 사원번호,
	ENAME AS 이름,
    LENGTH(ENAME) AS 이름의자릿수,
    SAL AS 급여,
    LENGTH(SAL) AS 급여의자릿수
FROM EMP;

-- 문제6) EMP 테이블에서 이름 중 'L'자의 위치를 출력하여라.
-- 모든애들 대상
SELECT ENAME AS 이름,
	INSTR(ENAME, 'L') AS L의위치
FROM EMP;

-- L 들어가는 애들만
SELECT ENAME AS 이름,
	INSTR(ENAME, 'L') AS L의위치
FROM EMP
WHERE INSTR(ENAME, 'L') != 0;

-- 문제7) EMP 테이블에서 10번 부서의 사원에 대하여 담당 업무 중 좌측에 'A'를 삭제하고 급여 중 좌측의 1을 삭제하여 출력하여라.
-- 이게 뭔소리?
SELECT TRIM(LEADING 'A' FROM JOB) AS A삭제, DEPTNO, TRIM(LEADING 1 FROM SAL) AS 1삭제
FROM EMP
WHERE DEPTNO = 10;

-- 문제8) EMP 테이블에서 10번 부서의 사원에 대하여 담당 업무 중 우측에 'T'를 삭제하고 급여 중 우측의 0을 삭제하여 출력하여라.
-- 이게 뭔소리?
SELECT TRIM(TRAILING 'T' FROM JOB) AS T삭제, DEPTNO, TRIM(TRAILING 0 FROM SAL) AS 0삭제
FROM EMP
WHERE DEPTNO = 10;

-- 문제9) EMP 테이블에서 성명을 소문자로 바꾸어 출력하여라.
SELECT LOWER(ENAME)
FROM EMP;

-- 문제10) EMP 테이블에서 JOB에 'A'를 '$'로 바꾸어 출력하여라.
SELECT REPLACE(JOB, 'A', '$')
FROM EMP;

-- 문제11) EMP 테이블에서 급여를 30으로 나눈 나머지를 구하여 출력하여라.
SELECT SAL%30 AS 30으로나눈_나머지
FROM EMP;

-- 문제12) EMP 테이블에서 현재까지의 근무일수가 몇 주 몇 일인가를 출력하여라.  단, 근무일수가 많은 사람순으로 출력하여라.
-- TIMESTAMPDIFF(DAY, DATE(HIREDATE), CURRENT_DATE()) - TIMESTAMPDIFF(WEEK, DATE(HIREDATE), CURRENT_DATE()) * 7
SELECT ENAME, 
	DATE(HIREDATE) AS HIREDATE, 
    TIMESTAMPDIFF(WEEK, DATE(HIREDATE), CURRENT_DATE()) AS 몇주,
    TIMESTAMPDIFF(DAY, DATE(HIREDATE), CURRENT_DATE()) AS 몇일
FROM EMP
ORDER BY 몇일 DESC;

-- 문제13) EMP 테이블에서 10번 부서원이 현재까지의 근무 월수를 계산하여 출력하여라.
SELECT DEPTNO, ENAME,
	TIMESTAMPDIFF(MONTH, DATE(HIREDATE), CURRENT_DATE()) AS 근무월수
FROM EMP
WHERE DEPTNO = 10;

-- 문제14) EMP 테이블에서 10번 부서원의 입사 일자로부터 5개월이 지난 후 날짜를 계산하여 출력하여라.
SELECT DEPTNO, ENAME, DATE(HIREDATE), DATE(DATE_ADD(HIREDATE, INTERVAL 5 MONTH)) AS 5개월후
FROM EMP;

-- 문제15) EMP 테이블에서 10번 부서원의 입사 일자로부터 돌아오는 금요일을 계산하여 출력하여라.
SELECT  DEPTNO, ENAME, DATE(HIREDATE), NEXT_DAY AS 5개월후
FROM EMP;


-- 문제16) EMP 테이블에서 입사한 달의 근무 일수를 계산하여 출력하여라. 단, 토요일과 일요일도 근무일수에 포함한다.


-- 문제17) EMP 테이블에서 10번 부서 중 입사한 달의 ROUND과 TRUNCATE 함수를 비교합니다.