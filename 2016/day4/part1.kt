import java.util.PriorityQueue
import java.util.Collections

fun main(args : Array<String>) {
    var s = readLine()
    var sum = 0
    while (s != null) {
        val parts = s.split('-') as MutableList<String>
        val counter = IntArray(26) { 0 }
        val tail: String = parts.removeAt(parts.size - 1)
        parts.forEach {
            str -> str.forEach {
                counter[it - 'a']++
            }
        }
        val pq = PriorityQueue<Int>(26, Collections.reverseOrder())
        counter.forEach { pq.add(it)}
        val ID = tail.substring(0, tail.indexOf('[')).toInt()
        var is_real = true
        for (p in tail.indexOf('[') + 1 until tail.indexOf(']') - 1) {
            if (counter[tail[p] - 'a'] != pq.poll()) {
                is_real = false;
                break;
            }
        }
        if (is_real)
            sum += ID
        s = readLine()
    }
    println(sum)
}
