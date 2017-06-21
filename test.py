import cppimport
mod1 = cppimport.imp("mod1")
mod2 = cppimport.imp("mod2")


x = mod1.VecInt()
x.append(0)
y = x.add_fxn()
print(y)
