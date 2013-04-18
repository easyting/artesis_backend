/**
 * @file
 *
 * Backend functionality.
 */
(function ($) {

  // Ajax responder for updating login box.
  Drupal.ajax.prototype.commands['artesis_backend_update_login'] = function (ajax, response, status) {
    $('.block-ding-username h2').html(Drupal.t("Welcome") + '<span>' + $('.block-ding-username #ding-user-name .content').text() + '</span>');
    return;
  };

})(jQuery);
