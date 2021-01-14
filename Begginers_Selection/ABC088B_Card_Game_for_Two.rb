n = gets
cards = gets.chomp.split.map(&:to_i)
alice_point = 0
bob_point = 0
num_times = cards.size
person = 'Alice'

while num_times > 0
  if person == 'Alice'
    alice_point += cards.max
    cards.delete_at(cards.index(cards.max))
    person = 'Bob'
  else
    bob_point += cards.max
    cards.delete_at(cards.index(cards.max))
    person = 'Alice'
  end
  num_times -= 1
end

puts alice_point - bob_point