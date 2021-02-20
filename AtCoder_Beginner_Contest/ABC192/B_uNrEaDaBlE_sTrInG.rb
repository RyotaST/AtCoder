def downcase?(s)
  (s =~ /^[a-z]+$/) == 0
end

def upcase?(s)
  (s =~ /^[A-Z]+$/) == 0
end

s = gets.chomp.chars
count = 0
s.each do |n|
  count += 1
  if count % 2 == 1
    if downcase?(n)
      next
    else
      puts "No"
      exit
    end
  else
    if upcase?(n)
      next
    else
      puts "No"
      exit
    end
  end
end
