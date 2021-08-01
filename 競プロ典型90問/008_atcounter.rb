N = gets.to_i
S = gets.chomp.chars
a, at, atc, atco, atcod, atcode, atcoder = 0,0,0,0,0,0,0
S.each do |x|
  if x == "a"
    a += 1
  elsif x == "t"
    at += a
  elsif x == "c"
    atc += at
  elsif x == "o"
    atco += atc
  elsif x == "d"
    atcod += atco
  elsif x == "e"
    atcode += atcod
  elsif x == "r"
    atcoder += atcode
  else
    next
  end
end

puts atcoder % (10**9+7)