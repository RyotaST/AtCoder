N = gets.chomp.to_i
strings_box = []
mark = []
N.times do
  string = gets.chomp
  if string[0] == '!'
    if mark.include?(string)
      next
    else
      mark << string
    end
  else
    if strings_box.include?(string)
      next
    else
      strings_box << string
    end
  end
end
result = 'satisfiable'

if mark.size < strings_box.size
  mark.size.times do |n1|
    if result == 'satisfiable'
      if strings_box.include?(mark[n1][1..-1])
        result = mark[n1][1..-1]
        break
      end
    end
  end
else
  strings_box.size.times do |n2|
    if result == 'satisfiable'
      if mark.include?("!#{strings_box[n2]}")
        result = strings_box[n2]
        break
      end
    end
  end
end

puts result