import java.util.PriorityQueue
import java.util.Collections

fun main(args : Array<String>) {
    var s = readLine()
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
        if (is_real && parts.size > 2) {
            parts.map {
                val s1 = StringBuilder(it);
                for (p in 0 until s1.length )
                    s1[p] = ((s1[p] - 'a' + ID) % 26 + 'a'.toInt()).toChar()
                s1.toString()
            }.run {
                if (this[0] == "northpole" &&
                    this[1] == "object" &&
                    this[2] == "storage") {
                    println(ID)
                    return
                } 
            } 
        }
        s = readLine()
    }
}
