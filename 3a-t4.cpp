#include&lt;iostream&gt;
using namespace std;
int main()
{
int k, i = 1, sum_k = 0, number;
cout &lt;&lt; &quot; Enter the amount of integers to sum = &quot;; cin &gt;&gt; k;
if (k == 0) {
cout &lt;&lt; &quot; You should enter the positive integer &quot;; // if k is not positive integer programm will show us
the following message
} else {
if (k &gt; 0) { // loop will work only when k &gt; 0
do {
cout &lt;&lt; &quot;Enter integer nr. &quot; &lt;&lt; i &lt;&lt; &quot;: &quot;;
cin &gt;&gt; number;
sum_k += number;
i++;
} while (i &lt;= k);

}
cout &lt;&lt; &quot; The total sum of &quot; &lt;&lt; k &lt;&lt; &quot; integers is: &quot; &lt;&lt; sum_k;
}
return 0;
}
