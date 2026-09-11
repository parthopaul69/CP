# [Vacation Interrupted](https://toph.co/p/vacation-interrupted)

| Field | Value |
|---|---|
| **Platform** | 🟢 Toph |
| **Problem** | [Vacation Interrupted](https://toph.co/p/vacation-interrupted) |
| **Contest** | N/A |
| **Category** | Practice |
| **Verdict** | ✅ Accepted |
| **Language** | C++23 GCC 13.2 |
| **Runtime** | N/A |
| **Memory** | N/A |
| **Submission** | [2122528](https://toph.co/s/2122528) |

---

| ⏱ Time Limit | 💾 Memory Limit |
|---|---|
| 1s | 512 MB |

---

## Problem Statement


		<h1>
			
				M.
			
			Vacation Interrupted
		</h1>

		
			<p>Akib vai is trying to enjoy a peaceful holiday in <strong>Cox's Bazar</strong>. However, Rafy won't stop blowing up his phone, constantly asking him to provide a problem for the Intra AUST Programming contest.</p>
<p>Getting thoroughly annoyed, Akib vai finally texted back: <em>"Difficulty koto hobe?"</em></p>
<p>Rafy promptly replied: <em>"Jate maximum $K$ jon pare."</em></p>
<p>There are $N$ batches participating in the contest. You are given an array $A$, where $A_i$ represents the total problem-solving strength of the $i$-th batch. If Akib vai sets the problem difficulty to a positive integer $D$, the number of people from the $i$-th batch who can solve it will be exactly $\lfloor A_i / D \rfloor$.</p>
<p>Can you help Akib vai find the <strong>minimum</strong> integer difficulty $D$ ($D \ge 1$) he needs to set so that the total number of people who solve the problem across all batches is <strong>at most</strong> $K$?</p>


			
				
					<div role="heading" aria-level="3" class="pview__sectionhead">Input</div>
					<p>The first line contains two integers $N$ and $K$ ($1 \le N \le 10^5$, $1 \le K \le 10^{14}$) — the number of batches and the maximum allowed number of solvers.</p>
<p>The second line contains $N$ space-separated integers $A_1, A_2, \dots, A_N$ ($1 \le A_i \le 10^9$) — the strengths of each batch.</p>

				
				
				
				
					<div role="heading" aria-level="3" class="pview__sectionhead">Output</div>
					<p>Print a single integer — the minimum positive integer difficulty $D$ that satisfies Rafy's condition.</p>

				
			
		

		
		
			<div role="heading" aria-level="3" class="pview__sectionhead">Example</div>
			
				
				<div class="pview__sample">
					
						<div class="pview__samplecell">
							<div class="pview__samplelabel">Input</div>
							<div class="copywrap">
								<pre id="preSample0Input">3 5
10 20 30
</pre>
								
							</div>
						</div>
						<div class="pview__samplecell">
							<div class="pview__samplelabel">Output</div>
							<div class="copywrap">
								<pre id="preSample0Output">11
</pre>
								
							</div>
						</div>
					
					
				</div>
			
		

		
	

## Examples

### Example 1

**Input**
```
3 5
10 20 30
```

**Output**
```
11
```

---
> 🔗 [View on Toph](https://toph.co/p/vacation-interrupted)
---
*Synced by [CodeSync Pro](https://github.com/parthopaul69/CodeSync-Pro-Extension)*
