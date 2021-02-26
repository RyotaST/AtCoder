H, W = gets.split.map(&:to_i)
s = Array.new(H) {gets.chomp.chars}
result = 0
count_side = Array.new(H-2) {Array.new}
judge = ""
1.upto(W-2) do |n1|
  1.upto(H-2) do |n2|
    if s[n2][n1] == "."
      judge = "."
      next
    else
      result += 1 if !(count.include?(n2))
      count << n2
      break
    end
  end
end

count = 0
1.upto(W-2) do |n1|
  (H-2).downto(1) do |n2|
    if s[n2][n1] == "."
      next
    else
      result += 1 if count != n2
      count = n2
      break
    end
  end
end

count = 0
1.upto(H-2) do |n1|
  1.upto(W-2) do |n2|
    if s[n1][n2] == "."
      next
    else
      result += 1 if (!(count.include?(n2)) && judge == ".")
        result += 1
      elseif ((count.include?(n2)) && judge == ".")
        
      count << n2
    end
    if n2 == W-1
  end
end

count = 0
1.upto(H-2) do |n1|
  (W-2).downto(1) do |n2|
    if s[n1][n2] == "."
      next
    else
      result += 1 if count != n2
      count = n2
      break
    end
  end
end

puts result