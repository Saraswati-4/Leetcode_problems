# Write your MySQL query statement below
select s.book_id, s.title, s.author , s.genre, s.publication_year, s.current_borrowers from (select l.book_id, l.title, l.author , l.genre, l.publication_year, count(b.record_id) as current_borrowers
from library_books l
join borrowing_records b on l.book_id=b.book_id
where return_date is NULL
group by b.book_id) s
join library_books l on s.book_id=l.book_id
where s.current_borrowers = l.total_copies
order by s.current_borrowers desc, s.title asc;