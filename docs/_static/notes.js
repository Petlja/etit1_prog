window.addEventListener('load', function() {
   nodes = document.querySelectorAll('.learnmorenote-type .course-content p:nth-of-type(1)');
    for (var i = 0; i < nodes.length; i++) {
        nodes[i].addEventListener('click', function(event) {
            var parent = event.currentTarget.parentNode;
            var paras = parent.querySelectorAll('.learnmorenote-type .course-content p:not(:nth-of-type(1))');
            event.currentTarget.classList.toggle('expanded');
            for (var j = 0; j < paras.length; j++) {
                paras[j].style.display = paras[j].style.display == 'block' ? 'none' : 'block';
            }
        });
    }
});