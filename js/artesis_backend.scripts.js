/**
 * @file
 *
 * Backend functionality.
 */
(function ($) {

  // Ajax responder for updating login box.
  Drupal.ajax.prototype.commands['artesis_backend_update_login'] = function (ajax, response, status) {
    $('.block-ding-user-frontend-ding-username h2').html(Drupal.t("Welcome") + '<span>' + $('.block-ding-user-frontend-ding-username #ding-user-name .content').text() + '</span>');
    return;
  };

})(jQuery);
