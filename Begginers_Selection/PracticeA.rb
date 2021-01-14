a = gets.to_i
str = gets
s = gets

if str.include?(" ")
  pos = str.index(" ") 
  b = str[0..pos-1].to_i
  c = str[pos+1..-1].to_i
end

puts a +  b + c
puts s