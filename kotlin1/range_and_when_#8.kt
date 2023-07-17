fun main()
{
    println("Enter value of i \nto check whether it's in 1 to 7 range or not")
    var i:Int = Integer.valueOf(readLine())
    var result1 = i in 1..7     // it include upperbond
    var result2 = i in 1 until 7 // it does not inculde upperbond
    println("IN .. range ---> $result1")
    println("IN until range ---> $result2")

    println("++++++++++++++++++++++++++++++++++++")
/* so this work as bunch of if-else statement*/
    println("enter value of j")
    var j:Int = Integer.valueOf(readLine())
    var result3=when(j)
    {
        in 1..5 -> "First five"
        in 6..10 -> "second five"
        in 11..15 -> "third five  "
        else -> "not in first three"
    }
    println(result3)
}