## What?
Будут выбраны несколько контестов, из которых каждый студент получает по одной задаче, по которой он должен пройти ревью. Ревью - это когда вы присылаете мне код, который получает ОК в контесте, а я указываю на недостатки и прошу их исправить. Для вас это возможность поучиться написанию грамотного кода, который хорошо делает свою работу и который не стыдно показать другим людям. Более скучная мотивация такая, что задача на ревью будет засчитана только при условии пройденного ревью.  
Как происходит ревью, написано в конце документа. Ревью считается пройденным, если замечаний к коду после очередной попытки больше нет. При этом у вас есть **три попытки**. То есть, отправляя код в третий раз, шанса исправиться в случае ошибок уже не будет и ревью не будет пройдено: то есть я меняю статус задачи на отличный от ОК и больше засылать ее нельзя.  
**В ваших интересах начинать делать посылки как только задача стала доступна для решения.**

## The таблица
Ссылка на таблицу с прогрессом (доступна для редактирования, вам это понадобится):
https://docs.google.com/spreadsheets/d/1VyqNlF8Py5Df_kTRkimb33SmcgcobNBk0yTPbApFWOw/edit?usp=sharing
Обратите внимание, в этой таблице один лист соответствует одному контесту и называется соответствующим образом.

## Checklist
Ваш лучший друг, следуя советам которого вы будете экономить свое и мое время, а также количество попыток:
[checklist](https://github.com/StrausMG/teaching/blob/master/2019_hse_cpp_seminars/checklist.md) (в частности, важно обращать внимание на секцию Code Style, чтобы ваши попытки не тратились на глупости типа названий переменных)

## Как происходит ревью
Если вы - джедай гитхаба/гитлаба, то скажу так: от вас в таблице просто нужны ссылки на коммиты в **приватный репозиторий**, к которому у меня должен быть доступ. Остальное в этой секции можете не читать.

Если вы не джедай, то просто следуйте этой инструкции:
1. Заводите аккаунт на https://github.com (хорошо подумайте над ником :))
2. Опять заходите уже будучи авторизованным на https://github.com
3. Слева нажимаете “New"
4. Указываете имя "2019_hse_cpp_review"
5. **Обязательно выбираете опцию "Private"**
6. Ставите галочку “Initialize this repository with a README”
7. Нажимаете "Create repository"
8. В панели сверху нажимаете кнопку "Settings"; слева выбираете секцию "Collaborators"; находите меня по нику "StrausMG"; нажимаете "Add collaborator"
9. Дальше представим, что вы напрограммировали на си-плюс-плюсе файлик, который получает OK в контесте и который вы хотите отправить на ревью.
10. Заходите на страницу своего репозитория (ссылка https://github.com/<ваш ник>/2019_hse_cpp_review)
11. Нажимаете кнопку "Upload files" (недалеко от зеленой кнопки "Clone or download"); выбираете ваш файлик; в секции "Commit changes" в верхнем поле пишете "<номер контеста>.<номер попытки>" (например, "1.1"); нажимаете "Commit changes";
12. Заходим на страницу репозитория; находим статусную строку (в ней указаны количество commits, branches, releases, contributors); нажимаем на слово "commits"; нажимаем на сообщение из пункта 11 (то есть "<номер контеста>.<номер попытки>"); копируете ссылку страницы, на которой оказались (если вы хотите поделиться ссылкой на другую посылку, то просто нажимаете на другое соответствующее сообщение)
13. Вставляете ссылку в таблицу в лист соответствующего контеста в колонку с соответствующей попыткой
14. Далее опционально пишите мне в телеграм, что вы оставили в таблице новую попытку. Когда я оставлю все нужные комментарии по ссылке с вашим кодом, я оставлю еще один комментарий в духе “Можно начинать следующую попытку” или “Ревью пройдено” или что-либо еще. Также после этого я поменяю цвет ячейки в таблице на какой-нибудь веселый. Не придумал, как уведомлять вас об этом, так что просто отслеживайте (хотя по идее мои комментарии должны приходить вам на почту). При этом если цвет поменялся на зеленый, значит вы прошли ревью и больше ничего делать не надо. Если же не на зеленый, то возвращаетесь к пункту 9.
