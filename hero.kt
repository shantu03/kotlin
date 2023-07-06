class hero(arg:String,age:Int)
{
    var name=arg
        get() {
            field="I hacked the getter and real value is \n$field"
            return field
        }

    var page=age
        set(value) {if (value>0){ field=value
            println("inside true value")
        } else println("error") }
}
class hero2{
    init {
        println("new class created")
    }
    var password:String="***"
        get() {
            if (field.length<5) {
                println("Create strong password");
            }
            else println("Password is ->")
            return field
        }
        set(value) {
            if (password.length>13)
            {
                println("Password too much big")
            }
            else
            {
                println("Password successfully changed")
                field=value
            }
        }
}