fun main()
{
//    var j=machine()       -->cannot define because abstract class
    var a=computer()
    var b=printer()
    var c=caluculator()
    println(a.define() + "\n" + b.define()+ "\n" + c.define())
    
}

abstract class machine{
    abstract fun define():String        //--> this is abstract because it make no sence how you tell someone this is machine you have to tell which machine is this
var name:String="Shantu"
}
class computer:machine()
{
    override fun define():String {
        return "this is computer "
    }
}
class caluculator:machine()
{
    override fun define(): String {
        return "this is calculator"
    }
}
class printer:machine()
{
    override fun define(): String {
        return "this is printer"
    }
}
