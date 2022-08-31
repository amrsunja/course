# course
42 Mulhouse Course remake

# RULES
* Votre projet doit être écrit en C.

* Votre projet doit être codé à la Norme. Si vous avez des fichiers ou fonctions bonus,
  celles-ci seront inclues dans la vérification de la norme et vous aurez 0 au projet en cas de faute de norme.

* Vos fonctions de doivent pas s’arrêter de manière inattendue (segmentation fault,
  bus error, double free, etc) mis à part dans le cas d’un comportement indéfini.
  Si cela arrive, votre projet sera considéré non fonctionnel et vous aurez 0 au projet.

* Toute mémoire allouée sur la heap doit être libéré lorsque c’est nécessaire. Aucun leak ne sera toléré.

* Si le projet le demande, vous devez rendre un Makefile qui compilera vos sources pour créer la
  sortie demandée, en utilisant les flags -Wall, -Wextra et -Werror. Votre Makefile ne doit pas relink.

* Si le projet demande un Makefile, votre Makefile doit au minimum contenir les règles
  $(NAME), all, clean, fclean et re.

* Pour rendre des bonus, vous devez inclure une règle bonus à votre Makefile qui ajoutera les
  divers headers, librairies ou fonctions qui ne sont pas autorisées dans la partie principale
  du projet. Les bonus doivent être dans un fichier différent : _bonus.{c/h}. L’évaluation de
  la partie obligatoire et de la partie bonus sont faites séparément.

* Si le projet autorise votre libft, vous devez copier ses sources et son Makefile associé dans
  un dossier libft contenu à la racine. Le Makefile de votre projet doit compiler la librairie
  à l’aide de son Makefile, puis compiler le projet.
* Nous vous recommandons de créer des programmes de test pour votre projet, bien que ce travail ne
  sera pas rendu ni noté. Cela vous donnera une chance de tester facilement votre travail ainsi que celui de vos pairs.

* Vous devez rendre votre travail sur le git qui vous est assigné. Seul le travail déposé sur
  git sera évalué. Si Deepthought doit corriger votre travail, cela sera fait à la fin des
  peer-evaluations. Si une erreur se produit pendant l’évaluation Deepthought, celle-ci s’arrête.
