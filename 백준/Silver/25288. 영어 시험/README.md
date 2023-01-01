# [Silver IV] 영어 시험 - 25288 

[문제 링크](https://www.acmicpc.net/problem/25288) 

### 성능 요약

메모리: 30928 KB, 시간: 36 ms

### 분류

애드 혹(ad_hoc), 구성적(constructive), 문자열(string)

### 문제 설명

<p>정휘는 영어 시험에서 배점이 큰 서술형 문제의 답안을 apple 대신 aple이라고 써서 틀렸다. 한 글자 차이로 큰 점수를 잃은 정휘는 이런 채점 방식이 합리적이지 않다고 생각해서 선생님께 새로운 채점 기준을 제안하기로 했다.</p>

<p>정휘는 응시자가 작성한 답안과 실제 정답의 "최장 공통 부분 수열"의 길이에 비례하게 점수를 주는 방식을 제안했다. 만약 정답이 apple인 문제에 aple을 적어서 내면 배점의 80%를 얻을 수 있고, apple을 적어서 내면 문제의 점수를 온전하게 받을 수 있다. 하지만 선생님은 정답을 구성하는 알파벳과 정답의 길이만 알면, 동일한 단어로 모든 문제를 풀 수 있는 문자열이 존재함을 지적하며 이 방식을 거절했다. 예를 들어 정답의 길이가 2이고 정답에 a와 b만 들어갈 수 있다면, abba를 이용해 모든 문제를 풀 수 있다.</p>

<p>선생님이 거절하신 이유를 납득하지 못한 정휘는, 정답을 구성하는 알파벳들과 정답의 길이가 주어졌을 때 모든 답안에 대해 만점을 받을 수 있는 가장 짧은 문자열을 직접 만들어보기로 했다.</p>

<p>최장 공통 부분 수열이 무엇인지 잘 모르는 친구들은 친절한 준서가 준비한 아래 정의를 읽어보도록 하자. 알파벳을 수라고 생각하면 문자열도 수열이다.</p>

<ul>
	<li><strong>부분 수열</strong>이란 주어진 수열에서 1개 이상의 원소를 골라 원래 순서대로 나열하여 얻은 수열을 말한다.</li>
	<li>두 수열 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi><mo>,</mo><mi>B</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A, B$</span></mjx-container>의 <strong>공통 부분 수열</strong>이란 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A$</span></mjx-container>의 부분 수열이면서 동시에 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>B</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$B$</span></mjx-container>의 부분 수열인 수열을 말한다.</li>
	<li>두 수열 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi><mo>,</mo><mi>B</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A, B$</span></mjx-container>의 <strong>최장 공통 부분 수열</strong>이란 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D434 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n"><mjx-c class="mjx-c2C"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="2"><mjx-c class="mjx-c1D435 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>A</mi><mo>,</mo><mi>B</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$A, B$</span></mjx-container>의 공통 부분 수열 중 가장 긴 수열을 말한다.</li>
	<li>예를 들어, appl와 aple의 최장 공통 부분 수열은 apl이다.</li>
</ul>

### 입력 

 <p>첫째 줄에 정답의 길이 <mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mi class="mjx-i"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mi>N</mi></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$N$</span></mjx-container>이 주어진다. (<mjx-container class="MathJax" jax="CHTML" style="font-size: 109%; position: relative;"><mjx-math class="MJX-TEX" aria-hidden="true"><mjx-mn class="mjx-n"><mjx-c class="mjx-c31"></mjx-c></mjx-mn><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mi class="mjx-i" space="4"><mjx-c class="mjx-c1D441 TEX-I"></mjx-c></mjx-mi><mjx-mo class="mjx-n" space="4"><mjx-c class="mjx-c2264"></mjx-c></mjx-mo><mjx-mn class="mjx-n" space="4"><mjx-c class="mjx-c31"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn><mjx-mstyle><mjx-mspace style="width: 0.167em;"></mjx-mspace></mjx-mstyle><mjx-mn class="mjx-n"><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c><mjx-c class="mjx-c30"></mjx-c></mjx-mn></mjx-math><mjx-assistive-mml unselectable="on" display="inline"><math xmlns="http://www.w3.org/1998/Math/MathML"><mn>1</mn><mo>≤</mo><mi>N</mi><mo>≤</mo><mn>10</mn><mstyle scriptlevel="0"><mspace width="0.167em"></mspace></mstyle><mn>000</mn></math></mjx-assistive-mml><span aria-hidden="true" class="no-mathjax mjx-copytext">$1 \leq N \leq 10\,000$</span></mjx-container>)</p>

<p>둘째 줄에 정답을 구성하는 알파벳이 공백 없이 소문자로 주어진다. 각 알파벳은 최대 한 번 주어진다.</p>

### 출력 

 <p>모든 답안에 대해 만점을 받을 수 있는 가장 짧은 문자열을 출력한다.</p>

<p>가능한 가장 짧은 문자열이 여러 가지인 경우 아무거나 출력한다.</p>

