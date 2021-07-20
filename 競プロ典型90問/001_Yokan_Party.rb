#input
n,l = gets.split.map(&:to_i)
k = gets.to_i
a1 = gets.split.map(&:to_i)

#切れ目毎の長さをa2に格納
a2 = []
left = 0
a1.each_with_index do |value, index|
  index == 0 ? a2 << value : a2 << value-left
  left = value
  a2 << (l - left) if index == a1.length-1
end

def check(x, a2, k)
  result = 0
  count = 0
  check = false
  a2.each_with_index do |value, index|
    result += value
    if index == a2.length-1
      break
    end
    if result >= -x
      result = 0
      count += 1
    end
    if count > k
      check = true
    end
  end
  if check == false
  	(count == k) && (result >= -x) ? check = true : check = false
  end
  check
end

answer = (-l..-1).bsearch do |x|
  check(x,a2,k)
end

puts -answer