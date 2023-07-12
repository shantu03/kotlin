import kotlin.math.PI
import kotlin.time.times

open class shape{
    open    fun result():Double{
        println("Answer is ->")
        return 0.0
    }
}
class circle(var radius:Double):shape(){
    override fun result():Double {
        return PI * radius*radius
    }
}
class square(var side:Int):shape()
{
    override fun result(): Double {
        return side*side.toDouble()
    }
}
class triangle(var lenght:Double,var breath:Double):shape(){
    override fun result(): Double {
        return 0.5*lenght*breath
    }
}
fun main()
{
    var obj: Array<shape> = arrayOf(circle(4.0),triangle(2.0,3.0)
        ,square(4))
    allcalculation(obj)
}
fun allcalculation(objec:Array<shape>)      //--> main advantage
{                                           //ata kiti pn class add kele shape class
    for(sh:shape in objec)                  // la inherit karun tr fakt main function
    {                                       //madhe ya function la pass karaych
        println(sh.result())                //--->this is work easy for us
    }
}
