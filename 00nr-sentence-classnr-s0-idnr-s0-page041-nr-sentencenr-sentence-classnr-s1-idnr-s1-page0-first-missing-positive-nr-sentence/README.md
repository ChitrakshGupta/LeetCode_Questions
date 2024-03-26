<h2><a href="https://leetcode.com/problems/first-missing-positive/"><nr-sentence class="nr-s0" id="nr-s0" page="0">41.</nr-sentence><nr-sentence class="nr-s1" id="nr-s1" page="0"> First Missing Positive</nr-sentence></a></h2><h3>Hard</h3><hr><div><p><nr-sentence class="nr-s3" id="nr-s3" page="0">Given an unsorted integer array </nr-sentence><code><nr-sentence class="nr-s3" id="nr-s3" page="0">nums</nr-sentence></code><nr-sentence class="nr-s3" id="nr-s3" page="0">.</nr-sentence><nr-sentence class="nr-s4" id="nr-s4" page="0"> Return the </nr-sentence><em><nr-sentence class="nr-s4" id="nr-s4" page="0">smallest positive integer</nr-sentence></em><nr-sentence class="nr-s4" id="nr-s4" page="0"> that is </nr-sentence><em><nr-sentence class="nr-s4" id="nr-s4" page="0">not present</nr-sentence></em><nr-sentence class="nr-s4" id="nr-s4" page="0"> in </nr-sentence><code><nr-sentence class="nr-s4" id="nr-s4" page="0">nums</nr-sentence></code>.</p>

<p><nr-sentence class="nr-s5" id="nr-s5" page="0">You must implement an algorithm that runs in </nr-sentence><code><nr-sentence class="nr-s5" id="nr-s5" page="0">O(n)</nr-sentence></code><nr-sentence class="nr-s5" id="nr-s5" page="0"> time and uses </nr-sentence><code><nr-sentence class="nr-s5" id="nr-s5" page="0">O(1)</nr-sentence></code><nr-sentence class="nr-s5" id="nr-s5" page="0"> auxiliary space.</nr-sentence></p>

<p>&nbsp;</p>
<p><strong class="example"><nr-sentence class="nr-s6" id="nr-s6" page="0">Example 1:</nr-sentence></strong></p>

<pre><strong><nr-sentence class="nr-selected-post nr-s7" id="nr-s7" page="0">Input:</nr-sentence></strong><nr-sentence class="nr-selected-post nr-s8" id="nr-s8" page="0"> nums = [1,2,0]</nr-sentence>
<strong><nr-sentence class="nr-selected-post nr-s9" id="nr-s9" page="0">Output:</nr-sentence></strong><nr-sentence class="nr-selected-post nr-s10" id="nr-s10" page="0"> 3</nr-sentence>
<strong><nr-sentence class="nr-selected-post nr-s11" id="nr-s11" page="0">Explanation:</nr-sentence></strong><nr-sentence class="nr-selected-post nr-s12" id="nr-s12" page="0"> The numbers in the range [1,2] are all in the array.</nr-sentence>
</pre>

<p><strong class="example"><nr-sentence class="nr-s13" id="nr-s13" page="0">Example 2:</nr-sentence></strong></p>

<pre><strong><nr-sentence class="nr-s14" id="nr-s14" page="0">Input:</nr-sentence></strong><nr-sentence class="nr-s14" id="nr-s14" page="0"> nums = [3,4,-1,1]
</nr-sentence><strong><nr-sentence class="nr-s14" id="nr-s14" page="0">Output:</nr-sentence></strong><nr-sentence class="nr-s14" id="nr-s14" page="0"> 2
</nr-sentence><strong><nr-sentence class="nr-s14" id="nr-s14" page="0">Explanation:</nr-sentence></strong><nr-sentence class="nr-s14" id="nr-s14" page="0"> 1 is in the array but 2 is missing.</nr-sentence>
</pre>

<p><strong class="example"><nr-sentence class="nr-s15" id="nr-s15" page="0">Example 3:</nr-sentence></strong></p>

<pre><strong><nr-sentence class="nr-s16" id="nr-s16" page="0">Input:</nr-sentence></strong><nr-sentence class="nr-s16" id="nr-s16" page="0"> nums = [7,8,9,11,12]
</nr-sentence><strong><nr-sentence class="nr-s16" id="nr-s16" page="0">Output:</nr-sentence></strong><nr-sentence class="nr-s16" id="nr-s16" page="0"> 1
</nr-sentence><strong><nr-sentence class="nr-s16" id="nr-s16" page="0">Explanation:</nr-sentence></strong><nr-sentence class="nr-s16" id="nr-s16" page="0"> The smallest positive integer 1 is missing.</nr-sentence>
</pre>

<p>&nbsp;</p>
<p><strong><nr-sentence class="nr-s17" id="nr-s17" page="0">Constraints:</nr-sentence></strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
</ul>
</div>