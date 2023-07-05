import kotlin.math.pow

fun L12()
{
    println(add(1,7))
    println(add(7.7,2.3))
  var p = { a: Int, b: Int -> cartoon(a, b) } //this is equivalen to var p =::cartoon a
    p(5,5)

    //Power 2^6
    println("Power function 2^6 " + power(2.0,6.0))

}
fun add(a:Int,b:Int):Int
{
    println("IN first function ")
return a+b
}
fun add(a:Double,b:Double):Double
{
    println("In second funtion ")
    return a-b
}
fun cartoon(a: Int,b:Int):Int
{
    println("Inside the cartoon function ")
    return a*a
}
fun power(a:Double,b: Double):Double
{
    return a.pow(b)
}


fun main()
{
    L12();

}
