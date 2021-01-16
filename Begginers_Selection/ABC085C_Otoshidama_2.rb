n, y = gets.chomp.split.map(&:to_i)
ten_thousand_yen = y / 10000
one_thousand_yen = y / 1000
one_hundred = y / 100
remaining = 0
result = []

if ten_thousand_yen >= n
  if 10000 * n == y
    result = [n, 0, 0]
  else
    result = [-1, -1, -1]
  end
else
  ten_thousand_yen.to_a.reverse_each do |a|
      value = y - a * 10000
      remaining = n - a
      one_thousand_yen = value / 1000
      if one_thousand_yen >= remaining
      one_thousand_yen.to_a.reverse_each do |b|
        if one_thousand_yen >= remaining
          if 5000 *  ==
        else

        end
      end
  end
else
  result = [-1, -1, -1]
end