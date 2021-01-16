s = gets.chomp

until s.empty?
  if s.start_with?('dream')
    if s[5..6] == 'er'
      s[7..9] == 'ase' ? s.slice!(0, 5) : s.slice!(0, 7)
    else
      s.slice!(0, 5)
    end
    result = 'YES' if s.empty?
  elsif s.start_with?('erase')
    s[5] == 'r' ? s.slice!(0, 6) : s.slice!(0, 5)
    result = 'YES' if s.empty?
  else
    result = 'NO'
    break
  end
end

puts result