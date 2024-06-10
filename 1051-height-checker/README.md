<h2><a href="https://leetcode.com/problems/height-checker/">1051. Height Checker</a></h2><h3>Easy</h3><hr><div><p><nr-sentence class="nr-s0" id="nr-s0" page="0">A school is trying to take an annual photo</nr-sentence><nr-sentence class="nr-selected-post nr-s1" id="nr-s1" page="0"> of all the students.</nr-sentence><nr-sentence class="nr-selected-post nr-s2" id="nr-s2" page="0"> The students are asked to stand in a single file line in </nr-sentence><strong><nr-sentence class="nr-selected-post nr-s2" id="nr-s2" page="0">non-decreasing order</nr-sentence></strong><nr-sentence class="nr-selected-post nr-s2" id="nr-s2" page="0"> by height.</nr-sentence><nr-sentence class="nr-selected-post nr-s3" id="nr-s3" page="0"> Let this ordering be represented by <nr-word class="nr-s3w6">the</nr-word> integer array </nr-sentence><code><nr-sentence class="nr-selected-post nr-s3" id="nr-s3" page="0">expected</nr-sentence></code><nr-sentence class="nr-selected-post nr-s3" id="nr-s3" page="0"> where</nr-sentence> <code><nr-sentence class="nr-s4" id="nr-s4" page="0">expected[i]</nr-sentence></code><nr-sentence class="nr-s4" id="nr-s4" page="0"> is the expected height of the </nr-sentence><code><nr-sentence class="nr-s4" id="nr-s4" page="0">i</nr-sentence><sup><nr-sentence class="nr-s4" id="nr-s4" page="0">th</nr-sentence></sup></code><nr-sentence class="nr-s4" id="nr-s4" page="0"> student in line.</nr-sentence></p>

<p><nr-sentence class="nr-s5" id="nr-s5" page="0">You are given an integer array </nr-sentence><code><nr-sentence class="nr-s5" id="nr-s5" page="0">heights</nr-sentence></code><nr-sentence class="nr-s5" id="nr-s5" page="0"> representing the </nr-sentence><strong><nr-sentence class="nr-s5" id="nr-s5" page="0">current order</nr-sentence></strong><nr-sentence class="nr-s5" id="nr-s5" page="0"> that the students are standing in.</nr-sentence><nr-sentence class="nr-s6" id="nr-s6" page="0"> Each </nr-sentence><code><nr-sentence class="nr-s6" id="nr-s6" page="0">heights[i]</nr-sentence></code><nr-sentence class="nr-s6" id="nr-s6" page="0"> is the height of the </nr-sentence><code><nr-sentence class="nr-s6" id="nr-s6" page="0">i</nr-sentence><sup><nr-sentence class="nr-s6" id="nr-s6" page="0">th</nr-sentence></sup></code><nr-sentence class="nr-s6" id="nr-s6" page="0"> student in line (</nr-sentence><strong><nr-sentence class="nr-s6" id="nr-s6" page="0">0-indexed</nr-sentence></strong><nr-sentence class="nr-s6" id="nr-s6" page="0">).</nr-sentence></p>

<p><nr-sentence class="nr-s7" id="nr-s7" page="0">Return </nr-sentence><em><nr-sentence class="nr-s7" id="nr-s7" page="0">the </nr-sentence><strong><nr-sentence class="nr-s7" id="nr-s7" page="0">number of indices</nr-sentence></strong><nr-sentence class="nr-s7" id="nr-s7" page="0"> where </nr-sentence></em><code><nr-sentence class="nr-s7" id="nr-s7" page="0">heights[i] != expected[i]</nr-sentence></code>.</p>

<p>&nbsp;</p>
<p><strong class="example"><nr-sentence class="nr-s8" id="nr-s8" page="0">Example 1:</nr-sentence></strong></p>

<pre><strong><nr-sentence class="nr-s9" id="nr-s9" page="0">Input:</nr-sentence></strong><nr-sentence class="nr-s9" id="nr-s9" page="0"> heights = [1,1,4,2,1,3]
</nr-sentence><strong><nr-sentence class="nr-s9" id="nr-s9" page="0">Output:</nr-sentence></strong><nr-sentence class="nr-s9" id="nr-s9" page="0"> 3
</nr-sentence><strong><nr-sentence class="nr-s9" id="nr-s9" page="0">Explanation:</nr-sentence></strong><nr-sentence class="nr-s9" id="nr-s9" page="0"> 
heights:  [1,1,</nr-sentence><u><nr-sentence class="nr-s9" id="nr-s9" page="0">4</nr-sentence></u><nr-sentence class="nr-s9" id="nr-s9" page="0">,2,</nr-sentence><u><nr-sentence class="nr-s9" id="nr-s9" page="0">1</nr-sentence></u><nr-sentence class="nr-s9" id="nr-s9" page="0">,</nr-sentence><u><nr-sentence class="nr-s9" id="nr-s9" page="0">3</nr-sentence></u><nr-sentence class="nr-s9" id="nr-s9" page="0">]
expected: [1,1,</nr-sentence><u><nr-sentence class="nr-s9" id="nr-s9" page="0">1</nr-sentence></u><nr-sentence class="nr-s9" id="nr-s9" page="0">,2,</nr-sentence><u><nr-sentence class="nr-s9" id="nr-s9" page="0">3</nr-sentence></u><nr-sentence class="nr-s9" id="nr-s9" page="0">,</nr-sentence><u><nr-sentence class="nr-s9" id="nr-s9" page="0">4</nr-sentence></u><nr-sentence class="nr-s9" id="nr-s9" page="0">]
Indices 2, 4, and 5 do not match.</nr-sentence>
</pre>

<p><strong class="example"><nr-sentence class="nr-s10" id="nr-s10" page="0">Example 2:</nr-sentence></strong></p>

<pre><strong><nr-sentence class="nr-s11" id="nr-s11" page="0">Input:</nr-sentence></strong><nr-sentence class="nr-s11" id="nr-s11" page="0"> heights = [5,1,2,3,4]
</nr-sentence><strong><nr-sentence class="nr-s11" id="nr-s11" page="0">Output:</nr-sentence></strong><nr-sentence class="nr-s11" id="nr-s11" page="0"> 5
</nr-sentence><strong><nr-sentence class="nr-s11" id="nr-s11" page="0">Explanation:</nr-sentence></strong><nr-sentence class="nr-s11" id="nr-s11" page="0">
heights:  [</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">5</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">,</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">1</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">,</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">2</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">,</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">3</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">,</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">4</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">]
expected: [</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">1</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">,</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">2</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">,</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">3</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">,</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">4</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">,</nr-sentence><u><nr-sentence class="nr-s11" id="nr-s11" page="0">5</nr-sentence></u><nr-sentence class="nr-s11" id="nr-s11" page="0">]
All indices do not match.</nr-sentence>
</pre>

<p><strong class="example"><nr-sentence class="nr-s12" id="nr-s12" page="0">Example 3:</nr-sentence></strong></p>

<pre><strong><nr-sentence class="nr-s13" id="nr-s13" page="0">Input:</nr-sentence></strong><nr-sentence class="nr-s13" id="nr-s13" page="0"> heights = [1,2,3,4,5]
</nr-sentence><strong><nr-sentence class="nr-s13" id="nr-s13" page="0">Output:</nr-sentence></strong><nr-sentence class="nr-s13" id="nr-s13" page="0"> 0
</nr-sentence><strong><nr-sentence class="nr-s13" id="nr-s13" page="0">Explanation:</nr-sentence></strong><nr-sentence class="nr-s13" id="nr-s13" page="0">
heights:  [1,2,3,4,5]
expected: [1,2,3,4,5]
All indices match.</nr-sentence>
</pre>

<p>&nbsp;</p>
<p><strong><nr-sentence class="nr-s14" id="nr-s14" page="0">Constraints:</nr-sentence></strong></p>

<ul>
	<li><code>1 &lt;= heights.length &lt;= 100</code></li>
	<li><code>1 &lt;= heights[i] &lt;= 100</code></li>
</ul>
</div>