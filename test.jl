using CxxWrap
@wrapmodule("./build/libshape_lib") 

function __init__()
    @initcxx
end

# Use the C++ class in Julia!
s = Shape()
result = area(s, 10.0)
println("Success! Area calculated by C++: ", result)
