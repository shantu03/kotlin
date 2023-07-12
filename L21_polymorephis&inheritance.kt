fun main()
{
    var shape=shape()
    printarea(shape)      //--> passing objects
    var circle=circle(4.0)
    printarea(circle)
    var triangle=triangle(2.3,4.1)
    printarea(triangle)
//AS WE CAN SEE NO ERROR OCCURED, WE CAN PASS CHILD-CLASS OBJECT TO PARENT-CLASS CLASS TYPE

    //NORMAL POLYMORPHISM
    take(1,2)
    take(6.1,7.9)
    take()
}
//L20 madhle classes use krtoy
fun printarea(sh:shape)
{
    println(sh.result())
}
fun take(j:Int,k:Int)
{
    println("Addition is ${j+k}")
}
fun take(j:Double,k:Double)
{
    println("Addition is ${j+k}")
}
fun take()
{
    println("Normal funciton ")
}
