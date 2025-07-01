/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:36:12.380160517Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#ifndef OAI_OAIDefaultApi_H
#define OAI_OAIDefaultApi_H

#include "OAIHelpers.h"
#include "OAIHttpRequest.h"
#include "OAIServerConfiguration.h"
#include "OAIOauth.h"

#include "OAIAcceptedGiftTypes.h"
#include "OAIBotCommand.h"
#include "OAIBotCommandScope.h"
#include "OAIChatAdministratorRights.h"
#include "OAIChatPermissions.h"
#include "OAIError.h"
#include "OAIInlineKeyboardMarkup.h"
#include "OAIInlineQueryResult.h"
#include "OAIInlineQueryResultsButton.h"
#include "OAIInputMedia.h"
#include "OAIInputPaidMedia.h"
#include "OAIInputPollOption.h"
#include "OAIInputProfilePhoto.h"
#include "OAIInputSticker.h"
#include "OAIInputStoryContent.h"
#include "OAILabeledPrice.h"
#include "OAILinkPreviewOptions.h"
#include "OAIMaskPosition.h"
#include "OAIMenuButton.h"
#include "OAIMessageEntity.h"
#include "OAIPassportElementError.h"
#include "OAIReactionType.h"
#include "OAIReplyParameters.h"
#include "OAIShippingOption.h"
#include "OAIStoryArea.h"
#include "OAI_answerWebAppQuery_post_200_response.h"
#include "OAI_banChatMember_post_request_chat_id.h"
#include "OAI_copyMessage_post_200_response.h"
#include "OAI_createChatInviteLink_post_200_response.h"
#include "OAI_createChatSubscriptionInviteLink_post_request_chat_id.h"
#include "OAI_createForumTopic_post_200_response.h"
#include "OAI_editMessageText_post_200_response.h"
#include "OAI_editMessageText_post_request_chat_id.h"
#include "OAI_exportChatInviteLink_post_200_response.h"
#include "OAI_forwardMessage_post_request_from_chat_id.h"
#include "OAI_forwardMessages_post_200_response.h"
#include "OAI_forwardMessages_post_request_from_chat_id.h"
#include "OAI_getAvailableGifts_post_200_response.h"
#include "OAI_getBusinessAccountGifts_post_200_response.h"
#include "OAI_getBusinessAccountStarBalance_post_200_response.h"
#include "OAI_getBusinessConnection_post_200_response.h"
#include "OAI_getChatAdministrators_post_200_response.h"
#include "OAI_getChatMemberCount_post_200_response.h"
#include "OAI_getChatMember_post_200_response.h"
#include "OAI_getChatMenuButton_post_200_response.h"
#include "OAI_getChat_post_200_response.h"
#include "OAI_getFile_post_200_response.h"
#include "OAI_getForumTopicIconStickers_post_200_response.h"
#include "OAI_getGameHighScores_post_200_response.h"
#include "OAI_getMe_post_200_response.h"
#include "OAI_getMyCommands_post_200_response.h"
#include "OAI_getMyDefaultAdministratorRights_post_200_response.h"
#include "OAI_getMyDescription_post_200_response.h"
#include "OAI_getMyName_post_200_response.h"
#include "OAI_getMyShortDescription_post_200_response.h"
#include "OAI_getStarTransactions_post_200_response.h"
#include "OAI_getStickerSet_post_200_response.h"
#include "OAI_getUpdates_post_200_response.h"
#include "OAI_getUserChatBoosts_post_200_response.h"
#include "OAI_getUserChatBoosts_post_request_chat_id.h"
#include "OAI_getUserProfilePhotos_post_200_response.h"
#include "OAI_getWebhookInfo_post_200_response.h"
#include "OAI_leaveChat_post_request_chat_id.h"
#include "OAI_postStory_post_200_response.h"
#include "OAI_restrictChatMember_post_request_chat_id.h"
#include "OAI_revokeChatInviteLink_post_request_chat_id.h"
#include "OAI_savePreparedInlineMessage_post_200_response.h"
#include "OAI_sendAnimation_post_request_animation.h"
#include "OAI_sendAudio_post_request_audio.h"
#include "OAI_sendAudio_post_request_thumbnail.h"
#include "OAI_sendDocument_post_request_document.h"
#include "OAI_sendGift_post_request_chat_id.h"
#include "OAI_sendMediaGroup_post_200_response.h"
#include "OAI_sendMediaGroup_post_request_media_inner.h"
#include "OAI_sendMessage_post_200_response.h"
#include "OAI_sendMessage_post_request_chat_id.h"
#include "OAI_sendMessage_post_request_reply_markup.h"
#include "OAI_sendPaidMedia_post_request_chat_id.h"
#include "OAI_sendPhoto_post_request_photo.h"
#include "OAI_sendSticker_post_request_sticker.h"
#include "OAI_sendVideoNote_post_request_video_note.h"
#include "OAI_sendVideo_post_request_cover.h"
#include "OAI_sendVideo_post_request_video.h"
#include "OAI_sendVoice_post_request_voice.h"
#include "OAI_setStickerSetThumbnail_post_request_thumbnail.h"
#include "OAI_setWebhook_post_200_response.h"
#include "OAI_stopPoll_post_200_response.h"
#include <QString>

#include <QObject>
#include <QByteArray>
#include <QStringList>
#include <QList>
#include <QNetworkAccessManager>

namespace tele_rest {

class OAIDefaultApi : public QObject {
    Q_OBJECT

public:
    OAIDefaultApi(const int timeOut = 0);
    ~OAIDefaultApi();

    void initializeServerConfigs();
    int setDefaultServerValue(int serverIndex,const QString &operation, const QString &variable,const QString &val);
    void setServerIndex(const QString &operation, int serverIndex);
    void setApiKey(const QString &apiKeyName, const QString &apiKey);
    void setBearerToken(const QString &token);
    void setUsername(const QString &username);
    void setPassword(const QString &password);
    void setTimeOut(const int timeOut);
    void setWorkingDirectory(const QString &path);
    void setNetworkAccessManager(QNetworkAccessManager* manager);
    int addServerConfiguration(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables = QMap<QString, OAIServerVariable>());
    void setNewServerForAllOperations(const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void setNewServer(const QString &operation, const QUrl &url, const QString &description = "", const QMap<QString, OAIServerVariable> &variables =  QMap<QString, OAIServerVariable>());
    void addHeaders(const QString &key, const QString &value);
    void enableRequestCompression();
    void enableResponseCompression();
    void abortRequests();
    QString getParamStylePrefix(const QString &style);
    QString getParamStyleSuffix(const QString &style);
    QString getParamStyleDelimiter(const QString &style, const QString &name, bool isExplode);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  name QString [required]
    * @param[in]  sticker OAIInputSticker [required]
    */
    virtual void addStickerToSetPost(const qint32 &user_id, const QString &name, const OAIInputSticker &sticker);

    /**
    * @param[in]  callback_query_id QString [required]
    * @param[in]  text QString [optional]
    * @param[in]  show_alert bool [optional]
    * @param[in]  url QString [optional]
    * @param[in]  cache_time qint32 [optional]
    */
    virtual void answerCallbackQueryPost(const QString &callback_query_id, const ::tele_rest::OptionalParam<QString> &text = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &show_alert = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &url = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &cache_time = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  inline_query_id QString [required]
    * @param[in]  results QList<OAIInlineQueryResult> [required]
    * @param[in]  cache_time qint32 [optional]
    * @param[in]  is_personal bool [optional]
    * @param[in]  next_offset QString [optional]
    * @param[in]  button OAIInlineQueryResultsButton [optional]
    */
    virtual void answerInlineQueryPost(const QString &inline_query_id, const QList<OAIInlineQueryResult> &results, const ::tele_rest::OptionalParam<qint32> &cache_time = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &is_personal = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &next_offset = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineQueryResultsButton> &button = ::tele_rest::OptionalParam<OAIInlineQueryResultsButton>());

    /**
    * @param[in]  pre_checkout_query_id QString [required]
    * @param[in]  ok bool [required]
    * @param[in]  error_message QString [optional]
    */
    virtual void answerPreCheckoutQueryPost(const QString &pre_checkout_query_id, const bool &ok, const ::tele_rest::OptionalParam<QString> &error_message = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  shipping_query_id QString [required]
    * @param[in]  ok bool [required]
    * @param[in]  shipping_options QList<OAIShippingOption> [optional]
    * @param[in]  error_message QString [optional]
    */
    virtual void answerShippingQueryPost(const QString &shipping_query_id, const bool &ok, const ::tele_rest::OptionalParam<QList<OAIShippingOption>> &shipping_options = ::tele_rest::OptionalParam<QList<OAIShippingOption>>(), const ::tele_rest::OptionalParam<QString> &error_message = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  web_app_query_id QString [required]
    * @param[in]  result OAIInlineQueryResult [required]
    */
    virtual void answerWebAppQueryPost(const QString &web_app_query_id, const OAIInlineQueryResult &result);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    */
    virtual void approveChatJoinRequestPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &user_id);

    /**
    * @param[in]  chat_id OAI_banChatMember_post_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  until_date qint32 [optional]
    * @param[in]  revoke_messages bool [optional]
    */
    virtual void banChatMemberPost(const OAI_banChatMember_post_request_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &until_date = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &revoke_messages = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  sender_chat_id qint32 [required]
    */
    virtual void banChatSenderChatPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &sender_chat_id);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    */
    virtual void closeForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    */
    virtual void closeGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id);


    virtual void closePost();

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  owned_gift_id QString [required]
    */
    virtual void convertGiftToStarsPost(const QString &business_connection_id, const QString &owned_gift_id);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  from_chat_id OAI_forwardMessage_post_request_from_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  video_start_timestamp qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void copyMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_forwardMessage_post_request_from_chat_id &from_chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &video_start_timestamp = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  from_chat_id OAI_forwardMessages_post_request_from_chat_id [required]
    * @param[in]  message_ids QList<qint32> [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  remove_caption bool [optional]
    */
    virtual void copyMessagesPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_forwardMessages_post_request_from_chat_id &from_chat_id, const QList<qint32> &message_ids, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &remove_caption = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  name QString [optional]
    * @param[in]  expire_date qint32 [optional]
    * @param[in]  member_limit qint32 [optional]
    * @param[in]  creates_join_request bool [optional]
    */
    virtual void createChatInviteLinkPost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &expire_date = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &member_limit = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &creates_join_request = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_createChatSubscriptionInviteLink_post_request_chat_id [required]
    * @param[in]  subscription_period qint32 [required]
    * @param[in]  subscription_price qint32 [required]
    * @param[in]  name QString [optional]
    */
    virtual void createChatSubscriptionInviteLinkPost(const OAI_createChatSubscriptionInviteLink_post_request_chat_id &chat_id, const qint32 &subscription_period, const qint32 &subscription_price, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  name QString [required]
    * @param[in]  icon_color qint32 [optional]
    * @param[in]  icon_custom_emoji_id QString [optional]
    */
    virtual void createForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const QString &name, const ::tele_rest::OptionalParam<qint32> &icon_color = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &icon_custom_emoji_id = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  title QString [required]
    * @param[in]  description QString [required]
    * @param[in]  payload QString [required]
    * @param[in]  currency QString [required]
    * @param[in]  prices QList<OAILabeledPrice> [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  provider_token QString [optional]
    * @param[in]  subscription_period qint32 [optional]
    * @param[in]  max_tip_amount qint32 [optional]
    * @param[in]  suggested_tip_amounts QList<qint32> [optional]
    * @param[in]  provider_data QString [optional]
    * @param[in]  photo_url QString [optional]
    * @param[in]  photo_size qint32 [optional]
    * @param[in]  photo_width qint32 [optional]
    * @param[in]  photo_height qint32 [optional]
    * @param[in]  need_name bool [optional]
    * @param[in]  need_phone_number bool [optional]
    * @param[in]  need_email bool [optional]
    * @param[in]  need_shipping_address bool [optional]
    * @param[in]  send_phone_number_to_provider bool [optional]
    * @param[in]  send_email_to_provider bool [optional]
    * @param[in]  is_flexible bool [optional]
    */
    virtual void createInvoiceLinkPost(const QString &title, const QString &description, const QString &payload, const QString &currency, const QList<OAILabeledPrice> &prices, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &provider_token = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &subscription_period = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &max_tip_amount = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QList<qint32>> &suggested_tip_amounts = ::tele_rest::OptionalParam<QList<qint32>>(), const ::tele_rest::OptionalParam<QString> &provider_data = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &photo_url = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &photo_size = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &photo_width = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &photo_height = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &need_name = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_phone_number = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_email = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_shipping_address = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &send_phone_number_to_provider = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &send_email_to_provider = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &is_flexible = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  name QString [required]
    * @param[in]  title QString [required]
    * @param[in]  stickers QList<OAIInputSticker> [required]
    * @param[in]  sticker_type QString [optional]
    * @param[in]  needs_repainting bool [optional]
    */
    virtual void createNewStickerSetPost(const qint32 &user_id, const QString &name, const QString &title, const QList<OAIInputSticker> &stickers, const ::tele_rest::OptionalParam<QString> &sticker_type = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &needs_repainting = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    */
    virtual void declineChatJoinRequestPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &user_id);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  message_ids QList<qint32> [required]
    */
    virtual void deleteBusinessMessagesPost(const QString &business_connection_id, const QList<qint32> &message_ids);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    */
    virtual void deleteChatPhotoPost(const OAI_sendMessage_post_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    */
    virtual void deleteChatStickerSetPost(const OAI_restrictChatMember_post_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    */
    virtual void deleteForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  message_id qint32 [required]
    */
    virtual void deleteMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &message_id);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  message_ids QList<qint32> [required]
    */
    virtual void deleteMessagesPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QList<qint32> &message_ids);

    /**
    * @param[in]  scope OAIBotCommandScope [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void deleteMyCommandsPost(const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope = ::tele_rest::OptionalParam<OAIBotCommandScope>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  sticker QString [required]
    */
    virtual void deleteStickerFromSetPost(const QString &sticker);

    /**
    * @param[in]  name QString [required]
    */
    virtual void deleteStickerSetPost(const QString &name);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  story_id qint32 [required]
    */
    virtual void deleteStoryPost(const QString &business_connection_id, const qint32 &story_id);

    /**
    * @param[in]  drop_pending_updates bool [optional]
    */
    virtual void deleteWebhookPost(const ::tele_rest::OptionalParam<bool> &drop_pending_updates = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  invite_link QString [required]
    * @param[in]  name QString [optional]
    * @param[in]  expire_date qint32 [optional]
    * @param[in]  member_limit qint32 [optional]
    * @param[in]  creates_join_request bool [optional]
    */
    virtual void editChatInviteLinkPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &invite_link, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &expire_date = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &member_limit = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &creates_join_request = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  invite_link QString [required]
    * @param[in]  name QString [optional]
    */
    virtual void editChatSubscriptionInviteLinkPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &invite_link, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    * @param[in]  name QString [optional]
    * @param[in]  icon_custom_emoji_id QString [optional]
    */
    virtual void editForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id, const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &icon_custom_emoji_id = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  name QString [required]
    */
    virtual void editGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const QString &name);

    /**
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAI_editMessageText_post_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void editMessageCaptionPost(const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  latitude double [required]
    * @param[in]  longitude double [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAI_editMessageText_post_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  live_period qint32 [optional]
    * @param[in]  horizontal_accuracy double [optional]
    * @param[in]  heading qint32 [optional]
    * @param[in]  proximity_alert_radius qint32 [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void editMessageLiveLocationPost(const double &latitude, const double &longitude, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &live_period = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<double> &horizontal_accuracy = ::tele_rest::OptionalParam<double>(), const ::tele_rest::OptionalParam<qint32> &heading = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &proximity_alert_radius = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  media OAIInputMedia [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAI_editMessageText_post_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void editMessageMediaPost(const OAIInputMedia &media, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAI_editMessageText_post_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void editMessageReplyMarkupPost(const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  text QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAI_editMessageText_post_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  entities QList<OAIMessageEntity> [optional]
    * @param[in]  link_preview_options OAILinkPreviewOptions [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void editMessageTextPost(const QString &text, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<OAILinkPreviewOptions> &link_preview_options = ::tele_rest::OptionalParam<OAILinkPreviewOptions>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  story_id qint32 [required]
    * @param[in]  content OAIInputStoryContent [required]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  areas QList<OAIStoryArea> [optional]
    */
    virtual void editStoryPost(const QString &business_connection_id, const qint32 &story_id, const OAIInputStoryContent &content, const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<QList<OAIStoryArea>> &areas = ::tele_rest::OptionalParam<QList<OAIStoryArea>>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  telegram_payment_charge_id QString [required]
    * @param[in]  is_canceled bool [required]
    */
    virtual void editUserStarSubscriptionPost(const qint32 &user_id, const QString &telegram_payment_charge_id, const bool &is_canceled);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    */
    virtual void exportChatInviteLinkPost(const OAI_sendMessage_post_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  from_chat_id OAI_forwardMessage_post_request_from_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  video_start_timestamp qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    */
    virtual void forwardMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_forwardMessage_post_request_from_chat_id &from_chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &video_start_timestamp = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  from_chat_id OAI_forwardMessages_post_request_from_chat_id [required]
    * @param[in]  message_ids QList<qint32> [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    */
    virtual void forwardMessagesPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_forwardMessages_post_request_from_chat_id &from_chat_id, const QList<qint32> &message_ids, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>());


    virtual void getAvailableGiftsPost();

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  exclude_unsaved bool [optional]
    * @param[in]  exclude_saved bool [optional]
    * @param[in]  exclude_unlimited bool [optional]
    * @param[in]  exclude_limited bool [optional]
    * @param[in]  exclude_unique bool [optional]
    * @param[in]  sort_by_price bool [optional]
    * @param[in]  offset QString [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void getBusinessAccountGiftsPost(const QString &business_connection_id, const ::tele_rest::OptionalParam<bool> &exclude_unsaved = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &exclude_saved = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &exclude_unlimited = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &exclude_limited = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &exclude_unique = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &sort_by_price = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &offset = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &limit = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  business_connection_id QString [required]
    */
    virtual void getBusinessAccountStarBalancePost(const QString &business_connection_id);

    /**
    * @param[in]  business_connection_id QString [required]
    */
    virtual void getBusinessConnectionPost(const QString &business_connection_id);

    /**
    * @param[in]  chat_id OAI_leaveChat_post_request_chat_id [required]
    */
    virtual void getChatAdministratorsPost(const OAI_leaveChat_post_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAI_leaveChat_post_request_chat_id [required]
    */
    virtual void getChatMemberCountPost(const OAI_leaveChat_post_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAI_leaveChat_post_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    */
    virtual void getChatMemberPost(const OAI_leaveChat_post_request_chat_id &chat_id, const qint32 &user_id);

    /**
    * @param[in]  chat_id qint32 [optional]
    */
    virtual void getChatMenuButtonPost(const ::tele_rest::OptionalParam<qint32> &chat_id = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  chat_id OAI_leaveChat_post_request_chat_id [required]
    */
    virtual void getChatPost(const OAI_leaveChat_post_request_chat_id &chat_id);

    /**
    * @param[in]  custom_emoji_ids QList<QString> [required]
    */
    virtual void getCustomEmojiStickersPost(const QList<QString> &custom_emoji_ids);

    /**
    * @param[in]  file_id QString [required]
    */
    virtual void getFilePost(const QString &file_id);


    virtual void getForumTopicIconStickersPost();

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  chat_id qint32 [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    */
    virtual void getGameHighScoresPost(const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &chat_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>());


    virtual void getMePost();

    /**
    * @param[in]  scope OAIBotCommandScope [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void getMyCommandsPost(const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope = ::tele_rest::OptionalParam<OAIBotCommandScope>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  for_channels bool [optional]
    */
    virtual void getMyDefaultAdministratorRightsPost(const ::tele_rest::OptionalParam<bool> &for_channels = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  language_code QString [optional]
    */
    virtual void getMyDescriptionPost(const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  language_code QString [optional]
    */
    virtual void getMyNamePost(const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  language_code QString [optional]
    */
    virtual void getMyShortDescriptionPost(const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  offset qint32 [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void getStarTransactionsPost(const ::tele_rest::OptionalParam<qint32> &offset = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &limit = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  name QString [required]
    */
    virtual void getStickerSetPost(const QString &name);

    /**
    * @param[in]  offset qint32 [optional]
    * @param[in]  limit qint32 [optional]
    * @param[in]  timeout qint32 [optional]
    * @param[in]  allowed_updates QList<QString> [optional]
    */
    virtual void getUpdatesPost(const ::tele_rest::OptionalParam<qint32> &offset = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &limit = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &timeout = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QList<QString>> &allowed_updates = ::tele_rest::OptionalParam<QList<QString>>());

    /**
    * @param[in]  chat_id OAI_getUserChatBoosts_post_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    */
    virtual void getUserChatBoostsPost(const OAI_getUserChatBoosts_post_request_chat_id &chat_id, const qint32 &user_id);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  offset qint32 [optional]
    * @param[in]  limit qint32 [optional]
    */
    virtual void getUserProfilePhotosPost(const qint32 &user_id, const ::tele_rest::OptionalParam<qint32> &offset = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &limit = ::tele_rest::OptionalParam<qint32>());


    virtual void getWebhookInfoPost();

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  month_count qint32 [required]
    * @param[in]  star_count qint32 [required]
    * @param[in]  text QString [optional]
    * @param[in]  text_parse_mode QString [optional]
    * @param[in]  text_entities QList<OAIMessageEntity> [optional]
    */
    virtual void giftPremiumSubscriptionPost(const qint32 &user_id, const qint32 &month_count, const qint32 &star_count, const ::tele_rest::OptionalParam<QString> &text = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &text_parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &text_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>());

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    */
    virtual void hideGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAI_leaveChat_post_request_chat_id [required]
    */
    virtual void leaveChatPost(const OAI_leaveChat_post_request_chat_id &chat_id);


    virtual void logOutPost();

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  disable_notification bool [optional]
    */
    virtual void pinChatMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  content OAIInputStoryContent [required]
    * @param[in]  active_period qint32 [required]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  areas QList<OAIStoryArea> [optional]
    * @param[in]  post_to_chat_page bool [optional]
    * @param[in]  protect_content bool [optional]
    */
    virtual void postStoryPost(const QString &business_connection_id, const OAIInputStoryContent &content, const qint32 &active_period, const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<QList<OAIStoryArea>> &areas = ::tele_rest::OptionalParam<QList<OAIStoryArea>>(), const ::tele_rest::OptionalParam<bool> &post_to_chat_page = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  is_anonymous bool [optional]
    * @param[in]  can_manage_chat bool [optional]
    * @param[in]  can_delete_messages bool [optional]
    * @param[in]  can_manage_video_chats bool [optional]
    * @param[in]  can_restrict_members bool [optional]
    * @param[in]  can_promote_members bool [optional]
    * @param[in]  can_change_info bool [optional]
    * @param[in]  can_invite_users bool [optional]
    * @param[in]  can_post_stories bool [optional]
    * @param[in]  can_edit_stories bool [optional]
    * @param[in]  can_delete_stories bool [optional]
    * @param[in]  can_post_messages bool [optional]
    * @param[in]  can_edit_messages bool [optional]
    * @param[in]  can_pin_messages bool [optional]
    * @param[in]  can_manage_topics bool [optional]
    */
    virtual void promoteChatMemberPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<bool> &is_anonymous = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_manage_chat = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_delete_messages = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_manage_video_chats = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_restrict_members = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_promote_members = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_change_info = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_invite_users = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_post_stories = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_edit_stories = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_delete_stories = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_post_messages = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_edit_messages = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_pin_messages = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &can_manage_topics = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  chat_id qint32 [required]
    * @param[in]  message_id qint32 [required]
    */
    virtual void readBusinessMessagePost(const QString &business_connection_id, const qint32 &chat_id, const qint32 &message_id);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  telegram_payment_charge_id QString [required]
    */
    virtual void refundStarPaymentPost(const qint32 &user_id, const QString &telegram_payment_charge_id);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  is_public bool [optional]
    */
    virtual void removeBusinessAccountProfilePhotoPost(const QString &business_connection_id, const ::tele_rest::OptionalParam<bool> &is_public = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    */
    virtual void removeChatVerificationPost(const OAI_sendMessage_post_request_chat_id &chat_id);

    /**
    * @param[in]  user_id qint32 [required]
    */
    virtual void removeUserVerificationPost(const qint32 &user_id);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    */
    virtual void reopenForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    */
    virtual void reopenGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  name QString [required]
    * @param[in]  old_sticker QString [required]
    * @param[in]  sticker OAIInputSticker [required]
    */
    virtual void replaceStickerInSetPost(const qint32 &user_id, const QString &name, const QString &old_sticker, const OAIInputSticker &sticker);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  permissions OAIChatPermissions [required]
    * @param[in]  use_independent_chat_permissions bool [optional]
    * @param[in]  until_date qint32 [optional]
    */
    virtual void restrictChatMemberPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &user_id, const OAIChatPermissions &permissions, const ::tele_rest::OptionalParam<bool> &use_independent_chat_permissions = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<qint32> &until_date = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  chat_id OAI_revokeChatInviteLink_post_request_chat_id [required]
    * @param[in]  invite_link QString [required]
    */
    virtual void revokeChatInviteLinkPost(const OAI_revokeChatInviteLink_post_request_chat_id &chat_id, const QString &invite_link);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  result OAIInlineQueryResult [required]
    * @param[in]  allow_user_chats bool [optional]
    * @param[in]  allow_bot_chats bool [optional]
    * @param[in]  allow_group_chats bool [optional]
    * @param[in]  allow_channel_chats bool [optional]
    */
    virtual void savePreparedInlineMessagePost(const qint32 &user_id, const OAIInlineQueryResult &result, const ::tele_rest::OptionalParam<bool> &allow_user_chats = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_bot_chats = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_group_chats = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_channel_chats = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  animation OAI_sendAnimation_post_request_animation [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  width qint32 [optional]
    * @param[in]  height qint32 [optional]
    * @param[in]  thumbnail OAI_sendAudio_post_request_thumbnail [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  has_spoiler bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendAnimationPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendAnimation_post_request_animation &animation, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &width = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &height = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &has_spoiler = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  audio OAI_sendAudio_post_request_audio [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  performer QString [optional]
    * @param[in]  title QString [optional]
    * @param[in]  thumbnail OAI_sendAudio_post_request_thumbnail [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendAudioPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendAudio_post_request_audio &audio, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &performer = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &title = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  action QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    */
    virtual void sendChatActionPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &action, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  phone_number QString [required]
    * @param[in]  first_name QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  last_name QString [optional]
    * @param[in]  vcard QString [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendContactPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &phone_number, const QString &first_name, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &last_name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &vcard = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  emoji QString [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendDicePost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &emoji = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  document OAI_sendDocument_post_request_document [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  thumbnail OAI_sendAudio_post_request_thumbnail [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  disable_content_type_detection bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendDocumentPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendDocument_post_request_document &document, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &disable_content_type_detection = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id qint32 [required]
    * @param[in]  game_short_name QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void sendGamePost(const qint32 &chat_id, const QString &game_short_name, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  gift_id QString [required]
    * @param[in]  user_id qint32 [optional]
    * @param[in]  chat_id OAI_sendGift_post_request_chat_id [optional]
    * @param[in]  pay_for_upgrade bool [optional]
    * @param[in]  text QString [optional]
    * @param[in]  text_parse_mode QString [optional]
    * @param[in]  text_entities QList<OAIMessageEntity> [optional]
    */
    virtual void sendGiftPost(const QString &gift_id, const ::tele_rest::OptionalParam<qint32> &user_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAI_sendGift_post_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAI_sendGift_post_request_chat_id>(), const ::tele_rest::OptionalParam<bool> &pay_for_upgrade = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &text = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &text_parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &text_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  title QString [required]
    * @param[in]  description QString [required]
    * @param[in]  payload QString [required]
    * @param[in]  currency QString [required]
    * @param[in]  prices QList<OAILabeledPrice> [required]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  provider_token QString [optional]
    * @param[in]  max_tip_amount qint32 [optional]
    * @param[in]  suggested_tip_amounts QList<qint32> [optional]
    * @param[in]  start_parameter QString [optional]
    * @param[in]  provider_data QString [optional]
    * @param[in]  photo_url QString [optional]
    * @param[in]  photo_size qint32 [optional]
    * @param[in]  photo_width qint32 [optional]
    * @param[in]  photo_height qint32 [optional]
    * @param[in]  need_name bool [optional]
    * @param[in]  need_phone_number bool [optional]
    * @param[in]  need_email bool [optional]
    * @param[in]  need_shipping_address bool [optional]
    * @param[in]  send_phone_number_to_provider bool [optional]
    * @param[in]  send_email_to_provider bool [optional]
    * @param[in]  is_flexible bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void sendInvoicePost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &title, const QString &description, const QString &payload, const QString &currency, const QList<OAILabeledPrice> &prices, const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &provider_token = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &max_tip_amount = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QList<qint32>> &suggested_tip_amounts = ::tele_rest::OptionalParam<QList<qint32>>(), const ::tele_rest::OptionalParam<QString> &start_parameter = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &provider_data = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &photo_url = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &photo_size = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &photo_width = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &photo_height = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &need_name = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_phone_number = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_email = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &need_shipping_address = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &send_phone_number_to_provider = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &send_email_to_provider = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &is_flexible = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  latitude double [required]
    * @param[in]  longitude double [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  horizontal_accuracy double [optional]
    * @param[in]  live_period qint32 [optional]
    * @param[in]  heading qint32 [optional]
    * @param[in]  proximity_alert_radius qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendLocationPost(const OAI_sendMessage_post_request_chat_id &chat_id, const double &latitude, const double &longitude, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<double> &horizontal_accuracy = ::tele_rest::OptionalParam<double>(), const ::tele_rest::OptionalParam<qint32> &live_period = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &heading = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &proximity_alert_radius = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  media QList<OAI_sendMediaGroup_post_request_media_inner> [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    */
    virtual void sendMediaGroupPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QList<OAI_sendMediaGroup_post_request_media_inner> &media, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  text QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  entities QList<OAIMessageEntity> [optional]
    * @param[in]  link_preview_options OAILinkPreviewOptions [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &text, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<OAILinkPreviewOptions> &link_preview_options = ::tele_rest::OptionalParam<OAILinkPreviewOptions>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendPaidMedia_post_request_chat_id [required]
    * @param[in]  star_count qint32 [required]
    * @param[in]  media QList<OAIInputPaidMedia> [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  payload QString [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendPaidMediaPost(const OAI_sendPaidMedia_post_request_chat_id &chat_id, const qint32 &star_count, const QList<OAIInputPaidMedia> &media, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &payload = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  photo OAI_sendPhoto_post_request_photo [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  has_spoiler bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendPhotoPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendPhoto_post_request_photo &photo, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &has_spoiler = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  question QString [required]
    * @param[in]  options QList<OAIInputPollOption> [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  question_parse_mode QString [optional]
    * @param[in]  question_entities QList<OAIMessageEntity> [optional]
    * @param[in]  is_anonymous bool [optional]
    * @param[in]  type QString [optional]
    * @param[in]  allows_multiple_answers bool [optional]
    * @param[in]  correct_option_id qint32 [optional]
    * @param[in]  explanation QString [optional]
    * @param[in]  explanation_parse_mode QString [optional]
    * @param[in]  explanation_entities QList<OAIMessageEntity> [optional]
    * @param[in]  open_period qint32 [optional]
    * @param[in]  close_date qint32 [optional]
    * @param[in]  is_closed bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendPollPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &question, const QList<OAIInputPollOption> &options, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &question_parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &question_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &is_anonymous = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &type = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &allows_multiple_answers = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<qint32> &correct_option_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &explanation = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &explanation_parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &explanation_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<qint32> &open_period = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &close_date = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &is_closed = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  sticker OAI_sendSticker_post_request_sticker [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  emoji QString [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendStickerPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendSticker_post_request_sticker &sticker, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &emoji = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  latitude double [required]
    * @param[in]  longitude double [required]
    * @param[in]  title QString [required]
    * @param[in]  address QString [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  foursquare_id QString [optional]
    * @param[in]  foursquare_type QString [optional]
    * @param[in]  google_place_id QString [optional]
    * @param[in]  google_place_type QString [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendVenuePost(const OAI_sendMessage_post_request_chat_id &chat_id, const double &latitude, const double &longitude, const QString &title, const QString &address, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &foursquare_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &foursquare_type = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &google_place_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &google_place_type = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  video_note OAI_sendVideoNote_post_request_video_note [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  length qint32 [optional]
    * @param[in]  thumbnail OAI_sendAudio_post_request_thumbnail [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendVideoNotePost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendVideoNote_post_request_video_note &video_note, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &length = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  video OAI_sendVideo_post_request_video [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  width qint32 [optional]
    * @param[in]  height qint32 [optional]
    * @param[in]  thumbnail OAI_sendAudio_post_request_thumbnail [optional]
    * @param[in]  cover OAI_sendVideo_post_request_cover [optional]
    * @param[in]  start_timestamp qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  show_caption_above_media bool [optional]
    * @param[in]  has_spoiler bool [optional]
    * @param[in]  supports_streaming bool [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendVideoPost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendVideo_post_request_video &video, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &width = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &height = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAI_sendAudio_post_request_thumbnail>(), const ::tele_rest::OptionalParam<OAI_sendVideo_post_request_cover> &cover = ::tele_rest::OptionalParam<OAI_sendVideo_post_request_cover>(), const ::tele_rest::OptionalParam<qint32> &start_timestamp = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<bool> &show_caption_above_media = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &has_spoiler = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &supports_streaming = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  voice OAI_sendVoice_post_request_voice [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_thread_id qint32 [optional]
    * @param[in]  caption QString [optional]
    * @param[in]  parse_mode QString [optional]
    * @param[in]  caption_entities QList<OAIMessageEntity> [optional]
    * @param[in]  duration qint32 [optional]
    * @param[in]  disable_notification bool [optional]
    * @param[in]  protect_content bool [optional]
    * @param[in]  allow_paid_broadcast bool [optional]
    * @param[in]  message_effect_id QString [optional]
    * @param[in]  reply_parameters OAIReplyParameters [optional]
    * @param[in]  reply_markup OAI_sendMessage_post_request_reply_markup [optional]
    */
    virtual void sendVoicePost(const OAI_sendMessage_post_request_chat_id &chat_id, const OAI_sendVoice_post_request_voice &voice, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_thread_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &caption = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &parse_mode = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QList<OAIMessageEntity>> &caption_entities = ::tele_rest::OptionalParam<QList<OAIMessageEntity>>(), const ::tele_rest::OptionalParam<qint32> &duration = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<bool> &disable_notification = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &protect_content = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &allow_paid_broadcast = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &message_effect_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIReplyParameters> &reply_parameters = ::tele_rest::OptionalParam<OAIReplyParameters>(), const ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup> &reply_markup = ::tele_rest::OptionalParam<OAI_sendMessage_post_request_reply_markup>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  bio QString [optional]
    */
    virtual void setBusinessAccountBioPost(const QString &business_connection_id, const ::tele_rest::OptionalParam<QString> &bio = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  show_gift_button bool [required]
    * @param[in]  accepted_gift_types OAIAcceptedGiftTypes [required]
    */
    virtual void setBusinessAccountGiftSettingsPost(const QString &business_connection_id, const bool &show_gift_button, const OAIAcceptedGiftTypes &accepted_gift_types);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  first_name QString [required]
    * @param[in]  last_name QString [optional]
    */
    virtual void setBusinessAccountNamePost(const QString &business_connection_id, const QString &first_name, const ::tele_rest::OptionalParam<QString> &last_name = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  photo OAIInputProfilePhoto [required]
    * @param[in]  is_public bool [optional]
    */
    virtual void setBusinessAccountProfilePhotoPost(const QString &business_connection_id, const OAIInputProfilePhoto &photo, const ::tele_rest::OptionalParam<bool> &is_public = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  username QString [optional]
    */
    virtual void setBusinessAccountUsernamePost(const QString &business_connection_id, const ::tele_rest::OptionalParam<QString> &username = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  custom_title QString [required]
    */
    virtual void setChatAdministratorCustomTitlePost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &user_id, const QString &custom_title);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  description QString [optional]
    */
    virtual void setChatDescriptionPost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &description = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id qint32 [optional]
    * @param[in]  menu_button OAIMenuButton [optional]
    */
    virtual void setChatMenuButtonPost(const ::tele_rest::OptionalParam<qint32> &chat_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<OAIMenuButton> &menu_button = ::tele_rest::OptionalParam<OAIMenuButton>());

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  permissions OAIChatPermissions [required]
    * @param[in]  use_independent_chat_permissions bool [optional]
    */
    virtual void setChatPermissionsPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const OAIChatPermissions &permissions, const ::tele_rest::OptionalParam<bool> &use_independent_chat_permissions = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  photo QJsonValue [required]
    */
    virtual void setChatPhotoPost(const OAI_sendMessage_post_request_chat_id &chat_id, const QJsonValue &photo);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  sticker_set_name QString [required]
    */
    virtual void setChatStickerSetPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const QString &sticker_set_name);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  title QString [required]
    */
    virtual void setChatTitlePost(const OAI_sendMessage_post_request_chat_id &chat_id, const QString &title);

    /**
    * @param[in]  name QString [required]
    * @param[in]  custom_emoji_id QString [optional]
    */
    virtual void setCustomEmojiStickerSetThumbnailPost(const QString &name, const ::tele_rest::OptionalParam<QString> &custom_emoji_id = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  score qint32 [required]
    * @param[in]  force bool [optional]
    * @param[in]  disable_edit_message bool [optional]
    * @param[in]  chat_id qint32 [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    */
    virtual void setGameScorePost(const qint32 &user_id, const qint32 &score, const ::tele_rest::OptionalParam<bool> &force = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<bool> &disable_edit_message = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<qint32> &chat_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  reaction QList<OAIReactionType> [optional]
    * @param[in]  is_big bool [optional]
    */
    virtual void setMessageReactionPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QList<OAIReactionType>> &reaction = ::tele_rest::OptionalParam<QList<OAIReactionType>>(), const ::tele_rest::OptionalParam<bool> &is_big = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  commands QList<OAIBotCommand> [required]
    * @param[in]  scope OAIBotCommandScope [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void setMyCommandsPost(const QList<OAIBotCommand> &commands, const ::tele_rest::OptionalParam<OAIBotCommandScope> &scope = ::tele_rest::OptionalParam<OAIBotCommandScope>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  rights OAIChatAdministratorRights [optional]
    * @param[in]  for_channels bool [optional]
    */
    virtual void setMyDefaultAdministratorRightsPost(const ::tele_rest::OptionalParam<OAIChatAdministratorRights> &rights = ::tele_rest::OptionalParam<OAIChatAdministratorRights>(), const ::tele_rest::OptionalParam<bool> &for_channels = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  description QString [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void setMyDescriptionPost(const ::tele_rest::OptionalParam<QString> &description = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  name QString [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void setMyNamePost(const ::tele_rest::OptionalParam<QString> &name = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  short_description QString [optional]
    * @param[in]  language_code QString [optional]
    */
    virtual void setMyShortDescriptionPost(const ::tele_rest::OptionalParam<QString> &short_description = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<QString> &language_code = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  errors QList<OAIPassportElementError> [required]
    */
    virtual void setPassportDataErrorsPost(const qint32 &user_id, const QList<OAIPassportElementError> &errors);

    /**
    * @param[in]  sticker QString [required]
    * @param[in]  emoji_list QList<QString> [required]
    */
    virtual void setStickerEmojiListPost(const QString &sticker, const QList<QString> &emoji_list);

    /**
    * @param[in]  sticker QString [required]
    * @param[in]  keywords QList<QString> [optional]
    */
    virtual void setStickerKeywordsPost(const QString &sticker, const ::tele_rest::OptionalParam<QList<QString>> &keywords = ::tele_rest::OptionalParam<QList<QString>>());

    /**
    * @param[in]  sticker QString [required]
    * @param[in]  mask_position OAIMaskPosition [optional]
    */
    virtual void setStickerMaskPositionPost(const QString &sticker, const ::tele_rest::OptionalParam<OAIMaskPosition> &mask_position = ::tele_rest::OptionalParam<OAIMaskPosition>());

    /**
    * @param[in]  sticker QString [required]
    * @param[in]  position qint32 [required]
    */
    virtual void setStickerPositionInSetPost(const QString &sticker, const qint32 &position);

    /**
    * @param[in]  name QString [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  format QString [required]
    * @param[in]  thumbnail OAI_setStickerSetThumbnail_post_request_thumbnail [optional]
    */
    virtual void setStickerSetThumbnailPost(const QString &name, const qint32 &user_id, const QString &format, const ::tele_rest::OptionalParam<OAI_setStickerSetThumbnail_post_request_thumbnail> &thumbnail = ::tele_rest::OptionalParam<OAI_setStickerSetThumbnail_post_request_thumbnail>());

    /**
    * @param[in]  name QString [required]
    * @param[in]  title QString [required]
    */
    virtual void setStickerSetTitlePost(const QString &name, const QString &title);

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  emoji_status_custom_emoji_id QString [optional]
    * @param[in]  emoji_status_expiration_date qint32 [optional]
    */
    virtual void setUserEmojiStatusPost(const qint32 &user_id, const ::tele_rest::OptionalParam<QString> &emoji_status_custom_emoji_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &emoji_status_expiration_date = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  url QString [required]
    * @param[in]  certificate QJsonValue [optional]
    * @param[in]  ip_address QString [optional]
    * @param[in]  max_connections qint32 [optional]
    * @param[in]  allowed_updates QList<QString> [optional]
    * @param[in]  drop_pending_updates bool [optional]
    * @param[in]  secret_token QString [optional]
    */
    virtual void setWebhookPost(const QString &url, const ::tele_rest::OptionalParam<QJsonValue> &certificate = ::tele_rest::OptionalParam<QJsonValue>(), const ::tele_rest::OptionalParam<QString> &ip_address = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &max_connections = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QList<QString>> &allowed_updates = ::tele_rest::OptionalParam<QList<QString>>(), const ::tele_rest::OptionalParam<bool> &drop_pending_updates = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<QString> &secret_token = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  chat_id OAI_editMessageText_post_request_chat_id [optional]
    * @param[in]  message_id qint32 [optional]
    * @param[in]  inline_message_id QString [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void stopMessageLiveLocationPost(const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id> &chat_id = ::tele_rest::OptionalParam<OAI_editMessageText_post_request_chat_id>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>(), const ::tele_rest::OptionalParam<QString> &inline_message_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  message_id qint32 [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  reply_markup OAIInlineKeyboardMarkup [optional]
    */
    virtual void stopPollPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &message_id, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup> &reply_markup = ::tele_rest::OptionalParam<OAIInlineKeyboardMarkup>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  star_count qint32 [required]
    */
    virtual void transferBusinessAccountStarsPost(const QString &business_connection_id, const qint32 &star_count);

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  owned_gift_id QString [required]
    * @param[in]  new_owner_chat_id qint32 [required]
    * @param[in]  star_count qint32 [optional]
    */
    virtual void transferGiftPost(const QString &business_connection_id, const QString &owned_gift_id, const qint32 &new_owner_chat_id, const ::tele_rest::OptionalParam<qint32> &star_count = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  chat_id OAI_banChatMember_post_request_chat_id [required]
    * @param[in]  user_id qint32 [required]
    * @param[in]  only_if_banned bool [optional]
    */
    virtual void unbanChatMemberPost(const OAI_banChatMember_post_request_chat_id &chat_id, const qint32 &user_id, const ::tele_rest::OptionalParam<bool> &only_if_banned = ::tele_rest::OptionalParam<bool>());

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  sender_chat_id qint32 [required]
    */
    virtual void unbanChatSenderChatPost(const OAI_sendMessage_post_request_chat_id &chat_id, const qint32 &sender_chat_id);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    */
    virtual void unhideGeneralForumTopicPost(const OAI_restrictChatMember_post_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    */
    virtual void unpinAllChatMessagesPost(const OAI_sendMessage_post_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    * @param[in]  message_thread_id qint32 [required]
    */
    virtual void unpinAllForumTopicMessagesPost(const OAI_restrictChatMember_post_request_chat_id &chat_id, const qint32 &message_thread_id);

    /**
    * @param[in]  chat_id OAI_restrictChatMember_post_request_chat_id [required]
    */
    virtual void unpinAllGeneralForumTopicMessagesPost(const OAI_restrictChatMember_post_request_chat_id &chat_id);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  business_connection_id QString [optional]
    * @param[in]  message_id qint32 [optional]
    */
    virtual void unpinChatMessagePost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &business_connection_id = ::tele_rest::OptionalParam<QString>(), const ::tele_rest::OptionalParam<qint32> &message_id = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  business_connection_id QString [required]
    * @param[in]  owned_gift_id QString [required]
    * @param[in]  keep_original_details bool [optional]
    * @param[in]  star_count qint32 [optional]
    */
    virtual void upgradeGiftPost(const QString &business_connection_id, const QString &owned_gift_id, const ::tele_rest::OptionalParam<bool> &keep_original_details = ::tele_rest::OptionalParam<bool>(), const ::tele_rest::OptionalParam<qint32> &star_count = ::tele_rest::OptionalParam<qint32>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  sticker QJsonValue [required]
    * @param[in]  sticker_format QString [required]
    */
    virtual void uploadStickerFilePost(const qint32 &user_id, const QJsonValue &sticker, const QString &sticker_format);

    /**
    * @param[in]  chat_id OAI_sendMessage_post_request_chat_id [required]
    * @param[in]  custom_description QString [optional]
    */
    virtual void verifyChatPost(const OAI_sendMessage_post_request_chat_id &chat_id, const ::tele_rest::OptionalParam<QString> &custom_description = ::tele_rest::OptionalParam<QString>());

    /**
    * @param[in]  user_id qint32 [required]
    * @param[in]  custom_description QString [optional]
    */
    virtual void verifyUserPost(const qint32 &user_id, const ::tele_rest::OptionalParam<QString> &custom_description = ::tele_rest::OptionalParam<QString>());


private:
    QMap<QString,int> _serverIndices;
    QMap<QString,QList<OAIServerConfiguration>> _serverConfigs;
    QMap<QString, QString> _apiKeys;
    QString _bearerToken;
    QString _username;
    QString _password;
    int _timeOut;
    QString _workingDirectory;
    QNetworkAccessManager* _manager;
    QMap<QString, QString> _defaultHeaders;
    bool _isResponseCompressionEnabled;
    bool _isRequestCompressionEnabled;
    OAIHttpRequestInput _latestInput;
    OAIHttpRequestWorker *_latestWorker;
    QStringList _latestScope;
    OauthCode _authFlow;
    OauthImplicit _implicitFlow;
    OauthCredentials _credentialFlow;
    OauthPassword _passwordFlow;
    int _OauthMethod = 0;

    void addStickerToSetPostCallback(OAIHttpRequestWorker *worker);
    void answerCallbackQueryPostCallback(OAIHttpRequestWorker *worker);
    void answerInlineQueryPostCallback(OAIHttpRequestWorker *worker);
    void answerPreCheckoutQueryPostCallback(OAIHttpRequestWorker *worker);
    void answerShippingQueryPostCallback(OAIHttpRequestWorker *worker);
    void answerWebAppQueryPostCallback(OAIHttpRequestWorker *worker);
    void approveChatJoinRequestPostCallback(OAIHttpRequestWorker *worker);
    void banChatMemberPostCallback(OAIHttpRequestWorker *worker);
    void banChatSenderChatPostCallback(OAIHttpRequestWorker *worker);
    void closeForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void closeGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void closePostCallback(OAIHttpRequestWorker *worker);
    void convertGiftToStarsPostCallback(OAIHttpRequestWorker *worker);
    void copyMessagePostCallback(OAIHttpRequestWorker *worker);
    void copyMessagesPostCallback(OAIHttpRequestWorker *worker);
    void createChatInviteLinkPostCallback(OAIHttpRequestWorker *worker);
    void createChatSubscriptionInviteLinkPostCallback(OAIHttpRequestWorker *worker);
    void createForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void createInvoiceLinkPostCallback(OAIHttpRequestWorker *worker);
    void createNewStickerSetPostCallback(OAIHttpRequestWorker *worker);
    void declineChatJoinRequestPostCallback(OAIHttpRequestWorker *worker);
    void deleteBusinessMessagesPostCallback(OAIHttpRequestWorker *worker);
    void deleteChatPhotoPostCallback(OAIHttpRequestWorker *worker);
    void deleteChatStickerSetPostCallback(OAIHttpRequestWorker *worker);
    void deleteForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void deleteMessagePostCallback(OAIHttpRequestWorker *worker);
    void deleteMessagesPostCallback(OAIHttpRequestWorker *worker);
    void deleteMyCommandsPostCallback(OAIHttpRequestWorker *worker);
    void deleteStickerFromSetPostCallback(OAIHttpRequestWorker *worker);
    void deleteStickerSetPostCallback(OAIHttpRequestWorker *worker);
    void deleteStoryPostCallback(OAIHttpRequestWorker *worker);
    void deleteWebhookPostCallback(OAIHttpRequestWorker *worker);
    void editChatInviteLinkPostCallback(OAIHttpRequestWorker *worker);
    void editChatSubscriptionInviteLinkPostCallback(OAIHttpRequestWorker *worker);
    void editForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void editGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void editMessageCaptionPostCallback(OAIHttpRequestWorker *worker);
    void editMessageLiveLocationPostCallback(OAIHttpRequestWorker *worker);
    void editMessageMediaPostCallback(OAIHttpRequestWorker *worker);
    void editMessageReplyMarkupPostCallback(OAIHttpRequestWorker *worker);
    void editMessageTextPostCallback(OAIHttpRequestWorker *worker);
    void editStoryPostCallback(OAIHttpRequestWorker *worker);
    void editUserStarSubscriptionPostCallback(OAIHttpRequestWorker *worker);
    void exportChatInviteLinkPostCallback(OAIHttpRequestWorker *worker);
    void forwardMessagePostCallback(OAIHttpRequestWorker *worker);
    void forwardMessagesPostCallback(OAIHttpRequestWorker *worker);
    void getAvailableGiftsPostCallback(OAIHttpRequestWorker *worker);
    void getBusinessAccountGiftsPostCallback(OAIHttpRequestWorker *worker);
    void getBusinessAccountStarBalancePostCallback(OAIHttpRequestWorker *worker);
    void getBusinessConnectionPostCallback(OAIHttpRequestWorker *worker);
    void getChatAdministratorsPostCallback(OAIHttpRequestWorker *worker);
    void getChatMemberCountPostCallback(OAIHttpRequestWorker *worker);
    void getChatMemberPostCallback(OAIHttpRequestWorker *worker);
    void getChatMenuButtonPostCallback(OAIHttpRequestWorker *worker);
    void getChatPostCallback(OAIHttpRequestWorker *worker);
    void getCustomEmojiStickersPostCallback(OAIHttpRequestWorker *worker);
    void getFilePostCallback(OAIHttpRequestWorker *worker);
    void getForumTopicIconStickersPostCallback(OAIHttpRequestWorker *worker);
    void getGameHighScoresPostCallback(OAIHttpRequestWorker *worker);
    void getMePostCallback(OAIHttpRequestWorker *worker);
    void getMyCommandsPostCallback(OAIHttpRequestWorker *worker);
    void getMyDefaultAdministratorRightsPostCallback(OAIHttpRequestWorker *worker);
    void getMyDescriptionPostCallback(OAIHttpRequestWorker *worker);
    void getMyNamePostCallback(OAIHttpRequestWorker *worker);
    void getMyShortDescriptionPostCallback(OAIHttpRequestWorker *worker);
    void getStarTransactionsPostCallback(OAIHttpRequestWorker *worker);
    void getStickerSetPostCallback(OAIHttpRequestWorker *worker);
    void getUpdatesPostCallback(OAIHttpRequestWorker *worker);
    void getUserChatBoostsPostCallback(OAIHttpRequestWorker *worker);
    void getUserProfilePhotosPostCallback(OAIHttpRequestWorker *worker);
    void getWebhookInfoPostCallback(OAIHttpRequestWorker *worker);
    void giftPremiumSubscriptionPostCallback(OAIHttpRequestWorker *worker);
    void hideGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void leaveChatPostCallback(OAIHttpRequestWorker *worker);
    void logOutPostCallback(OAIHttpRequestWorker *worker);
    void pinChatMessagePostCallback(OAIHttpRequestWorker *worker);
    void postStoryPostCallback(OAIHttpRequestWorker *worker);
    void promoteChatMemberPostCallback(OAIHttpRequestWorker *worker);
    void readBusinessMessagePostCallback(OAIHttpRequestWorker *worker);
    void refundStarPaymentPostCallback(OAIHttpRequestWorker *worker);
    void removeBusinessAccountProfilePhotoPostCallback(OAIHttpRequestWorker *worker);
    void removeChatVerificationPostCallback(OAIHttpRequestWorker *worker);
    void removeUserVerificationPostCallback(OAIHttpRequestWorker *worker);
    void reopenForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void reopenGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void replaceStickerInSetPostCallback(OAIHttpRequestWorker *worker);
    void restrictChatMemberPostCallback(OAIHttpRequestWorker *worker);
    void revokeChatInviteLinkPostCallback(OAIHttpRequestWorker *worker);
    void savePreparedInlineMessagePostCallback(OAIHttpRequestWorker *worker);
    void sendAnimationPostCallback(OAIHttpRequestWorker *worker);
    void sendAudioPostCallback(OAIHttpRequestWorker *worker);
    void sendChatActionPostCallback(OAIHttpRequestWorker *worker);
    void sendContactPostCallback(OAIHttpRequestWorker *worker);
    void sendDicePostCallback(OAIHttpRequestWorker *worker);
    void sendDocumentPostCallback(OAIHttpRequestWorker *worker);
    void sendGamePostCallback(OAIHttpRequestWorker *worker);
    void sendGiftPostCallback(OAIHttpRequestWorker *worker);
    void sendInvoicePostCallback(OAIHttpRequestWorker *worker);
    void sendLocationPostCallback(OAIHttpRequestWorker *worker);
    void sendMediaGroupPostCallback(OAIHttpRequestWorker *worker);
    void sendMessagePostCallback(OAIHttpRequestWorker *worker);
    void sendPaidMediaPostCallback(OAIHttpRequestWorker *worker);
    void sendPhotoPostCallback(OAIHttpRequestWorker *worker);
    void sendPollPostCallback(OAIHttpRequestWorker *worker);
    void sendStickerPostCallback(OAIHttpRequestWorker *worker);
    void sendVenuePostCallback(OAIHttpRequestWorker *worker);
    void sendVideoNotePostCallback(OAIHttpRequestWorker *worker);
    void sendVideoPostCallback(OAIHttpRequestWorker *worker);
    void sendVoicePostCallback(OAIHttpRequestWorker *worker);
    void setBusinessAccountBioPostCallback(OAIHttpRequestWorker *worker);
    void setBusinessAccountGiftSettingsPostCallback(OAIHttpRequestWorker *worker);
    void setBusinessAccountNamePostCallback(OAIHttpRequestWorker *worker);
    void setBusinessAccountProfilePhotoPostCallback(OAIHttpRequestWorker *worker);
    void setBusinessAccountUsernamePostCallback(OAIHttpRequestWorker *worker);
    void setChatAdministratorCustomTitlePostCallback(OAIHttpRequestWorker *worker);
    void setChatDescriptionPostCallback(OAIHttpRequestWorker *worker);
    void setChatMenuButtonPostCallback(OAIHttpRequestWorker *worker);
    void setChatPermissionsPostCallback(OAIHttpRequestWorker *worker);
    void setChatPhotoPostCallback(OAIHttpRequestWorker *worker);
    void setChatStickerSetPostCallback(OAIHttpRequestWorker *worker);
    void setChatTitlePostCallback(OAIHttpRequestWorker *worker);
    void setCustomEmojiStickerSetThumbnailPostCallback(OAIHttpRequestWorker *worker);
    void setGameScorePostCallback(OAIHttpRequestWorker *worker);
    void setMessageReactionPostCallback(OAIHttpRequestWorker *worker);
    void setMyCommandsPostCallback(OAIHttpRequestWorker *worker);
    void setMyDefaultAdministratorRightsPostCallback(OAIHttpRequestWorker *worker);
    void setMyDescriptionPostCallback(OAIHttpRequestWorker *worker);
    void setMyNamePostCallback(OAIHttpRequestWorker *worker);
    void setMyShortDescriptionPostCallback(OAIHttpRequestWorker *worker);
    void setPassportDataErrorsPostCallback(OAIHttpRequestWorker *worker);
    void setStickerEmojiListPostCallback(OAIHttpRequestWorker *worker);
    void setStickerKeywordsPostCallback(OAIHttpRequestWorker *worker);
    void setStickerMaskPositionPostCallback(OAIHttpRequestWorker *worker);
    void setStickerPositionInSetPostCallback(OAIHttpRequestWorker *worker);
    void setStickerSetThumbnailPostCallback(OAIHttpRequestWorker *worker);
    void setStickerSetTitlePostCallback(OAIHttpRequestWorker *worker);
    void setUserEmojiStatusPostCallback(OAIHttpRequestWorker *worker);
    void setWebhookPostCallback(OAIHttpRequestWorker *worker);
    void stopMessageLiveLocationPostCallback(OAIHttpRequestWorker *worker);
    void stopPollPostCallback(OAIHttpRequestWorker *worker);
    void transferBusinessAccountStarsPostCallback(OAIHttpRequestWorker *worker);
    void transferGiftPostCallback(OAIHttpRequestWorker *worker);
    void unbanChatMemberPostCallback(OAIHttpRequestWorker *worker);
    void unbanChatSenderChatPostCallback(OAIHttpRequestWorker *worker);
    void unhideGeneralForumTopicPostCallback(OAIHttpRequestWorker *worker);
    void unpinAllChatMessagesPostCallback(OAIHttpRequestWorker *worker);
    void unpinAllForumTopicMessagesPostCallback(OAIHttpRequestWorker *worker);
    void unpinAllGeneralForumTopicMessagesPostCallback(OAIHttpRequestWorker *worker);
    void unpinChatMessagePostCallback(OAIHttpRequestWorker *worker);
    void upgradeGiftPostCallback(OAIHttpRequestWorker *worker);
    void uploadStickerFilePostCallback(OAIHttpRequestWorker *worker);
    void verifyChatPostCallback(OAIHttpRequestWorker *worker);
    void verifyUserPostCallback(OAIHttpRequestWorker *worker);

Q_SIGNALS:

    void addStickerToSetPostSignal(OAI_setWebhook_post_200_response summary);
    void answerCallbackQueryPostSignal(OAI_setWebhook_post_200_response summary);
    void answerInlineQueryPostSignal(OAI_setWebhook_post_200_response summary);
    void answerPreCheckoutQueryPostSignal(OAI_setWebhook_post_200_response summary);
    void answerShippingQueryPostSignal(OAI_setWebhook_post_200_response summary);
    void answerWebAppQueryPostSignal(OAI_answerWebAppQuery_post_200_response summary);
    void approveChatJoinRequestPostSignal(OAI_setWebhook_post_200_response summary);
    void banChatMemberPostSignal(OAI_setWebhook_post_200_response summary);
    void banChatSenderChatPostSignal(OAI_setWebhook_post_200_response summary);
    void closeForumTopicPostSignal(OAI_setWebhook_post_200_response summary);
    void closeGeneralForumTopicPostSignal(OAI_setWebhook_post_200_response summary);
    void closePostSignal(OAI_setWebhook_post_200_response summary);
    void convertGiftToStarsPostSignal(OAI_setWebhook_post_200_response summary);
    void copyMessagePostSignal(OAI_copyMessage_post_200_response summary);
    void copyMessagesPostSignal(OAI_forwardMessages_post_200_response summary);
    void createChatInviteLinkPostSignal(OAI_createChatInviteLink_post_200_response summary);
    void createChatSubscriptionInviteLinkPostSignal(OAI_createChatInviteLink_post_200_response summary);
    void createForumTopicPostSignal(OAI_createForumTopic_post_200_response summary);
    void createInvoiceLinkPostSignal(OAI_exportChatInviteLink_post_200_response summary);
    void createNewStickerSetPostSignal(OAI_setWebhook_post_200_response summary);
    void declineChatJoinRequestPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteBusinessMessagesPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteChatPhotoPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteChatStickerSetPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteForumTopicPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteMessagePostSignal(OAI_setWebhook_post_200_response summary);
    void deleteMessagesPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteMyCommandsPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteStickerFromSetPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteStickerSetPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteStoryPostSignal(OAI_setWebhook_post_200_response summary);
    void deleteWebhookPostSignal(OAI_setWebhook_post_200_response summary);
    void editChatInviteLinkPostSignal(OAI_createChatInviteLink_post_200_response summary);
    void editChatSubscriptionInviteLinkPostSignal(OAI_createChatInviteLink_post_200_response summary);
    void editForumTopicPostSignal(OAI_setWebhook_post_200_response summary);
    void editGeneralForumTopicPostSignal(OAI_setWebhook_post_200_response summary);
    void editMessageCaptionPostSignal(OAI_editMessageText_post_200_response summary);
    void editMessageLiveLocationPostSignal(OAI_editMessageText_post_200_response summary);
    void editMessageMediaPostSignal(OAI_editMessageText_post_200_response summary);
    void editMessageReplyMarkupPostSignal(OAI_editMessageText_post_200_response summary);
    void editMessageTextPostSignal(OAI_editMessageText_post_200_response summary);
    void editStoryPostSignal(OAI_postStory_post_200_response summary);
    void editUserStarSubscriptionPostSignal(OAI_setWebhook_post_200_response summary);
    void exportChatInviteLinkPostSignal(OAI_exportChatInviteLink_post_200_response summary);
    void forwardMessagePostSignal(OAI_sendMessage_post_200_response summary);
    void forwardMessagesPostSignal(OAI_forwardMessages_post_200_response summary);
    void getAvailableGiftsPostSignal(OAI_getAvailableGifts_post_200_response summary);
    void getBusinessAccountGiftsPostSignal(OAI_getBusinessAccountGifts_post_200_response summary);
    void getBusinessAccountStarBalancePostSignal(OAI_getBusinessAccountStarBalance_post_200_response summary);
    void getBusinessConnectionPostSignal(OAI_getBusinessConnection_post_200_response summary);
    void getChatAdministratorsPostSignal(OAI_getChatAdministrators_post_200_response summary);
    void getChatMemberCountPostSignal(OAI_getChatMemberCount_post_200_response summary);
    void getChatMemberPostSignal(OAI_getChatMember_post_200_response summary);
    void getChatMenuButtonPostSignal(OAI_getChatMenuButton_post_200_response summary);
    void getChatPostSignal(OAI_getChat_post_200_response summary);
    void getCustomEmojiStickersPostSignal(OAI_getForumTopicIconStickers_post_200_response summary);
    void getFilePostSignal(OAI_getFile_post_200_response summary);
    void getForumTopicIconStickersPostSignal(OAI_getForumTopicIconStickers_post_200_response summary);
    void getGameHighScoresPostSignal(OAI_getGameHighScores_post_200_response summary);
    void getMePostSignal(OAI_getMe_post_200_response summary);
    void getMyCommandsPostSignal(OAI_getMyCommands_post_200_response summary);
    void getMyDefaultAdministratorRightsPostSignal(OAI_getMyDefaultAdministratorRights_post_200_response summary);
    void getMyDescriptionPostSignal(OAI_getMyDescription_post_200_response summary);
    void getMyNamePostSignal(OAI_getMyName_post_200_response summary);
    void getMyShortDescriptionPostSignal(OAI_getMyShortDescription_post_200_response summary);
    void getStarTransactionsPostSignal(OAI_getStarTransactions_post_200_response summary);
    void getStickerSetPostSignal(OAI_getStickerSet_post_200_response summary);
    void getUpdatesPostSignal(OAI_getUpdates_post_200_response summary);
    void getUserChatBoostsPostSignal(OAI_getUserChatBoosts_post_200_response summary);
    void getUserProfilePhotosPostSignal(OAI_getUserProfilePhotos_post_200_response summary);
    void getWebhookInfoPostSignal(OAI_getWebhookInfo_post_200_response summary);
    void giftPremiumSubscriptionPostSignal(OAI_setWebhook_post_200_response summary);
    void hideGeneralForumTopicPostSignal(OAI_setWebhook_post_200_response summary);
    void leaveChatPostSignal(OAI_setWebhook_post_200_response summary);
    void logOutPostSignal(OAI_setWebhook_post_200_response summary);
    void pinChatMessagePostSignal(OAI_setWebhook_post_200_response summary);
    void postStoryPostSignal(OAI_postStory_post_200_response summary);
    void promoteChatMemberPostSignal(OAI_setWebhook_post_200_response summary);
    void readBusinessMessagePostSignal(OAI_setWebhook_post_200_response summary);
    void refundStarPaymentPostSignal(OAI_setWebhook_post_200_response summary);
    void removeBusinessAccountProfilePhotoPostSignal(OAI_setWebhook_post_200_response summary);
    void removeChatVerificationPostSignal(OAI_setWebhook_post_200_response summary);
    void removeUserVerificationPostSignal(OAI_setWebhook_post_200_response summary);
    void reopenForumTopicPostSignal(OAI_setWebhook_post_200_response summary);
    void reopenGeneralForumTopicPostSignal(OAI_setWebhook_post_200_response summary);
    void replaceStickerInSetPostSignal(OAI_setWebhook_post_200_response summary);
    void restrictChatMemberPostSignal(OAI_setWebhook_post_200_response summary);
    void revokeChatInviteLinkPostSignal(OAI_createChatInviteLink_post_200_response summary);
    void savePreparedInlineMessagePostSignal(OAI_savePreparedInlineMessage_post_200_response summary);
    void sendAnimationPostSignal(OAI_sendMessage_post_200_response summary);
    void sendAudioPostSignal(OAI_sendMessage_post_200_response summary);
    void sendChatActionPostSignal(OAI_setWebhook_post_200_response summary);
    void sendContactPostSignal(OAI_sendMessage_post_200_response summary);
    void sendDicePostSignal(OAI_sendMessage_post_200_response summary);
    void sendDocumentPostSignal(OAI_sendMessage_post_200_response summary);
    void sendGamePostSignal(OAI_sendMessage_post_200_response summary);
    void sendGiftPostSignal(OAI_setWebhook_post_200_response summary);
    void sendInvoicePostSignal(OAI_sendMessage_post_200_response summary);
    void sendLocationPostSignal(OAI_sendMessage_post_200_response summary);
    void sendMediaGroupPostSignal(OAI_sendMediaGroup_post_200_response summary);
    void sendMessagePostSignal(OAI_sendMessage_post_200_response summary);
    void sendPaidMediaPostSignal(OAI_sendMessage_post_200_response summary);
    void sendPhotoPostSignal(OAI_sendMessage_post_200_response summary);
    void sendPollPostSignal(OAI_sendMessage_post_200_response summary);
    void sendStickerPostSignal(OAI_sendMessage_post_200_response summary);
    void sendVenuePostSignal(OAI_sendMessage_post_200_response summary);
    void sendVideoNotePostSignal(OAI_sendMessage_post_200_response summary);
    void sendVideoPostSignal(OAI_sendMessage_post_200_response summary);
    void sendVoicePostSignal(OAI_sendMessage_post_200_response summary);
    void setBusinessAccountBioPostSignal(OAI_setWebhook_post_200_response summary);
    void setBusinessAccountGiftSettingsPostSignal(OAI_setWebhook_post_200_response summary);
    void setBusinessAccountNamePostSignal(OAI_setWebhook_post_200_response summary);
    void setBusinessAccountProfilePhotoPostSignal(OAI_setWebhook_post_200_response summary);
    void setBusinessAccountUsernamePostSignal(OAI_setWebhook_post_200_response summary);
    void setChatAdministratorCustomTitlePostSignal(OAI_setWebhook_post_200_response summary);
    void setChatDescriptionPostSignal(OAI_setWebhook_post_200_response summary);
    void setChatMenuButtonPostSignal(OAI_setWebhook_post_200_response summary);
    void setChatPermissionsPostSignal(OAI_setWebhook_post_200_response summary);
    void setChatPhotoPostSignal(OAI_setWebhook_post_200_response summary);
    void setChatStickerSetPostSignal(OAI_setWebhook_post_200_response summary);
    void setChatTitlePostSignal(OAI_setWebhook_post_200_response summary);
    void setCustomEmojiStickerSetThumbnailPostSignal(OAI_setWebhook_post_200_response summary);
    void setGameScorePostSignal(OAI_editMessageText_post_200_response summary);
    void setMessageReactionPostSignal(OAI_setWebhook_post_200_response summary);
    void setMyCommandsPostSignal(OAI_setWebhook_post_200_response summary);
    void setMyDefaultAdministratorRightsPostSignal(OAI_setWebhook_post_200_response summary);
    void setMyDescriptionPostSignal(OAI_setWebhook_post_200_response summary);
    void setMyNamePostSignal(OAI_setWebhook_post_200_response summary);
    void setMyShortDescriptionPostSignal(OAI_setWebhook_post_200_response summary);
    void setPassportDataErrorsPostSignal(OAI_setWebhook_post_200_response summary);
    void setStickerEmojiListPostSignal(OAI_setWebhook_post_200_response summary);
    void setStickerKeywordsPostSignal(OAI_setWebhook_post_200_response summary);
    void setStickerMaskPositionPostSignal(OAI_setWebhook_post_200_response summary);
    void setStickerPositionInSetPostSignal(OAI_setWebhook_post_200_response summary);
    void setStickerSetThumbnailPostSignal(OAI_setWebhook_post_200_response summary);
    void setStickerSetTitlePostSignal(OAI_setWebhook_post_200_response summary);
    void setUserEmojiStatusPostSignal(OAI_setWebhook_post_200_response summary);
    void setWebhookPostSignal(OAI_setWebhook_post_200_response summary);
    void stopMessageLiveLocationPostSignal(OAI_editMessageText_post_200_response summary);
    void stopPollPostSignal(OAI_stopPoll_post_200_response summary);
    void transferBusinessAccountStarsPostSignal(OAI_setWebhook_post_200_response summary);
    void transferGiftPostSignal(OAI_setWebhook_post_200_response summary);
    void unbanChatMemberPostSignal(OAI_setWebhook_post_200_response summary);
    void unbanChatSenderChatPostSignal(OAI_setWebhook_post_200_response summary);
    void unhideGeneralForumTopicPostSignal(OAI_setWebhook_post_200_response summary);
    void unpinAllChatMessagesPostSignal(OAI_setWebhook_post_200_response summary);
    void unpinAllForumTopicMessagesPostSignal(OAI_setWebhook_post_200_response summary);
    void unpinAllGeneralForumTopicMessagesPostSignal(OAI_setWebhook_post_200_response summary);
    void unpinChatMessagePostSignal(OAI_setWebhook_post_200_response summary);
    void upgradeGiftPostSignal(OAI_setWebhook_post_200_response summary);
    void uploadStickerFilePostSignal(OAI_getFile_post_200_response summary);
    void verifyChatPostSignal(OAI_setWebhook_post_200_response summary);
    void verifyUserPostSignal(OAI_setWebhook_post_200_response summary);


    void addStickerToSetPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void answerCallbackQueryPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void answerInlineQueryPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void answerPreCheckoutQueryPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void answerShippingQueryPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void answerWebAppQueryPostSignalFull(OAIHttpRequestWorker *worker, OAI_answerWebAppQuery_post_200_response summary);
    void approveChatJoinRequestPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void banChatMemberPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void banChatSenderChatPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void closeForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void closeGeneralForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void closePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void convertGiftToStarsPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void copyMessagePostSignalFull(OAIHttpRequestWorker *worker, OAI_copyMessage_post_200_response summary);
    void copyMessagesPostSignalFull(OAIHttpRequestWorker *worker, OAI_forwardMessages_post_200_response summary);
    void createChatInviteLinkPostSignalFull(OAIHttpRequestWorker *worker, OAI_createChatInviteLink_post_200_response summary);
    void createChatSubscriptionInviteLinkPostSignalFull(OAIHttpRequestWorker *worker, OAI_createChatInviteLink_post_200_response summary);
    void createForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_createForumTopic_post_200_response summary);
    void createInvoiceLinkPostSignalFull(OAIHttpRequestWorker *worker, OAI_exportChatInviteLink_post_200_response summary);
    void createNewStickerSetPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void declineChatJoinRequestPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteBusinessMessagesPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteChatPhotoPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteChatStickerSetPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteMessagePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteMessagesPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteMyCommandsPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteStickerFromSetPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteStickerSetPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteStoryPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void deleteWebhookPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void editChatInviteLinkPostSignalFull(OAIHttpRequestWorker *worker, OAI_createChatInviteLink_post_200_response summary);
    void editChatSubscriptionInviteLinkPostSignalFull(OAIHttpRequestWorker *worker, OAI_createChatInviteLink_post_200_response summary);
    void editForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void editGeneralForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void editMessageCaptionPostSignalFull(OAIHttpRequestWorker *worker, OAI_editMessageText_post_200_response summary);
    void editMessageLiveLocationPostSignalFull(OAIHttpRequestWorker *worker, OAI_editMessageText_post_200_response summary);
    void editMessageMediaPostSignalFull(OAIHttpRequestWorker *worker, OAI_editMessageText_post_200_response summary);
    void editMessageReplyMarkupPostSignalFull(OAIHttpRequestWorker *worker, OAI_editMessageText_post_200_response summary);
    void editMessageTextPostSignalFull(OAIHttpRequestWorker *worker, OAI_editMessageText_post_200_response summary);
    void editStoryPostSignalFull(OAIHttpRequestWorker *worker, OAI_postStory_post_200_response summary);
    void editUserStarSubscriptionPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void exportChatInviteLinkPostSignalFull(OAIHttpRequestWorker *worker, OAI_exportChatInviteLink_post_200_response summary);
    void forwardMessagePostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void forwardMessagesPostSignalFull(OAIHttpRequestWorker *worker, OAI_forwardMessages_post_200_response summary);
    void getAvailableGiftsPostSignalFull(OAIHttpRequestWorker *worker, OAI_getAvailableGifts_post_200_response summary);
    void getBusinessAccountGiftsPostSignalFull(OAIHttpRequestWorker *worker, OAI_getBusinessAccountGifts_post_200_response summary);
    void getBusinessAccountStarBalancePostSignalFull(OAIHttpRequestWorker *worker, OAI_getBusinessAccountStarBalance_post_200_response summary);
    void getBusinessConnectionPostSignalFull(OAIHttpRequestWorker *worker, OAI_getBusinessConnection_post_200_response summary);
    void getChatAdministratorsPostSignalFull(OAIHttpRequestWorker *worker, OAI_getChatAdministrators_post_200_response summary);
    void getChatMemberCountPostSignalFull(OAIHttpRequestWorker *worker, OAI_getChatMemberCount_post_200_response summary);
    void getChatMemberPostSignalFull(OAIHttpRequestWorker *worker, OAI_getChatMember_post_200_response summary);
    void getChatMenuButtonPostSignalFull(OAIHttpRequestWorker *worker, OAI_getChatMenuButton_post_200_response summary);
    void getChatPostSignalFull(OAIHttpRequestWorker *worker, OAI_getChat_post_200_response summary);
    void getCustomEmojiStickersPostSignalFull(OAIHttpRequestWorker *worker, OAI_getForumTopicIconStickers_post_200_response summary);
    void getFilePostSignalFull(OAIHttpRequestWorker *worker, OAI_getFile_post_200_response summary);
    void getForumTopicIconStickersPostSignalFull(OAIHttpRequestWorker *worker, OAI_getForumTopicIconStickers_post_200_response summary);
    void getGameHighScoresPostSignalFull(OAIHttpRequestWorker *worker, OAI_getGameHighScores_post_200_response summary);
    void getMePostSignalFull(OAIHttpRequestWorker *worker, OAI_getMe_post_200_response summary);
    void getMyCommandsPostSignalFull(OAIHttpRequestWorker *worker, OAI_getMyCommands_post_200_response summary);
    void getMyDefaultAdministratorRightsPostSignalFull(OAIHttpRequestWorker *worker, OAI_getMyDefaultAdministratorRights_post_200_response summary);
    void getMyDescriptionPostSignalFull(OAIHttpRequestWorker *worker, OAI_getMyDescription_post_200_response summary);
    void getMyNamePostSignalFull(OAIHttpRequestWorker *worker, OAI_getMyName_post_200_response summary);
    void getMyShortDescriptionPostSignalFull(OAIHttpRequestWorker *worker, OAI_getMyShortDescription_post_200_response summary);
    void getStarTransactionsPostSignalFull(OAIHttpRequestWorker *worker, OAI_getStarTransactions_post_200_response summary);
    void getStickerSetPostSignalFull(OAIHttpRequestWorker *worker, OAI_getStickerSet_post_200_response summary);
    void getUpdatesPostSignalFull(OAIHttpRequestWorker *worker, OAI_getUpdates_post_200_response summary);
    void getUserChatBoostsPostSignalFull(OAIHttpRequestWorker *worker, OAI_getUserChatBoosts_post_200_response summary);
    void getUserProfilePhotosPostSignalFull(OAIHttpRequestWorker *worker, OAI_getUserProfilePhotos_post_200_response summary);
    void getWebhookInfoPostSignalFull(OAIHttpRequestWorker *worker, OAI_getWebhookInfo_post_200_response summary);
    void giftPremiumSubscriptionPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void hideGeneralForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void leaveChatPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void logOutPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void pinChatMessagePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void postStoryPostSignalFull(OAIHttpRequestWorker *worker, OAI_postStory_post_200_response summary);
    void promoteChatMemberPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void readBusinessMessagePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void refundStarPaymentPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void removeBusinessAccountProfilePhotoPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void removeChatVerificationPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void removeUserVerificationPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void reopenForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void reopenGeneralForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void replaceStickerInSetPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void restrictChatMemberPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void revokeChatInviteLinkPostSignalFull(OAIHttpRequestWorker *worker, OAI_createChatInviteLink_post_200_response summary);
    void savePreparedInlineMessagePostSignalFull(OAIHttpRequestWorker *worker, OAI_savePreparedInlineMessage_post_200_response summary);
    void sendAnimationPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendAudioPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendChatActionPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void sendContactPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendDicePostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendDocumentPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendGamePostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendGiftPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void sendInvoicePostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendLocationPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendMediaGroupPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMediaGroup_post_200_response summary);
    void sendMessagePostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendPaidMediaPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendPhotoPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendPollPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendStickerPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendVenuePostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendVideoNotePostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendVideoPostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void sendVoicePostSignalFull(OAIHttpRequestWorker *worker, OAI_sendMessage_post_200_response summary);
    void setBusinessAccountBioPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setBusinessAccountGiftSettingsPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setBusinessAccountNamePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setBusinessAccountProfilePhotoPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setBusinessAccountUsernamePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setChatAdministratorCustomTitlePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setChatDescriptionPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setChatMenuButtonPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setChatPermissionsPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setChatPhotoPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setChatStickerSetPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setChatTitlePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setCustomEmojiStickerSetThumbnailPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setGameScorePostSignalFull(OAIHttpRequestWorker *worker, OAI_editMessageText_post_200_response summary);
    void setMessageReactionPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setMyCommandsPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setMyDefaultAdministratorRightsPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setMyDescriptionPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setMyNamePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setMyShortDescriptionPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setPassportDataErrorsPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setStickerEmojiListPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setStickerKeywordsPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setStickerMaskPositionPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setStickerPositionInSetPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setStickerSetThumbnailPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setStickerSetTitlePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setUserEmojiStatusPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void setWebhookPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void stopMessageLiveLocationPostSignalFull(OAIHttpRequestWorker *worker, OAI_editMessageText_post_200_response summary);
    void stopPollPostSignalFull(OAIHttpRequestWorker *worker, OAI_stopPoll_post_200_response summary);
    void transferBusinessAccountStarsPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void transferGiftPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void unbanChatMemberPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void unbanChatSenderChatPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void unhideGeneralForumTopicPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void unpinAllChatMessagesPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void unpinAllForumTopicMessagesPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void unpinAllGeneralForumTopicMessagesPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void unpinChatMessagePostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void upgradeGiftPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void uploadStickerFilePostSignalFull(OAIHttpRequestWorker *worker, OAI_getFile_post_200_response summary);
    void verifyChatPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);
    void verifyUserPostSignalFull(OAIHttpRequestWorker *worker, OAI_setWebhook_post_200_response summary);

    Q_DECL_DEPRECATED_X("Use addStickerToSetPostSignalError() instead")
    void addStickerToSetPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void addStickerToSetPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerCallbackQueryPostSignalError() instead")
    void answerCallbackQueryPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void answerCallbackQueryPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerInlineQueryPostSignalError() instead")
    void answerInlineQueryPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void answerInlineQueryPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerPreCheckoutQueryPostSignalError() instead")
    void answerPreCheckoutQueryPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void answerPreCheckoutQueryPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerShippingQueryPostSignalError() instead")
    void answerShippingQueryPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void answerShippingQueryPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerWebAppQueryPostSignalError() instead")
    void answerWebAppQueryPostSignalE(OAI_answerWebAppQuery_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void answerWebAppQueryPostSignalError(OAI_answerWebAppQuery_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use approveChatJoinRequestPostSignalError() instead")
    void approveChatJoinRequestPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void approveChatJoinRequestPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use banChatMemberPostSignalError() instead")
    void banChatMemberPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void banChatMemberPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use banChatSenderChatPostSignalError() instead")
    void banChatSenderChatPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void banChatSenderChatPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use closeForumTopicPostSignalError() instead")
    void closeForumTopicPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void closeForumTopicPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use closeGeneralForumTopicPostSignalError() instead")
    void closeGeneralForumTopicPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void closeGeneralForumTopicPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use closePostSignalError() instead")
    void closePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void closePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use convertGiftToStarsPostSignalError() instead")
    void convertGiftToStarsPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void convertGiftToStarsPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use copyMessagePostSignalError() instead")
    void copyMessagePostSignalE(OAI_copyMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void copyMessagePostSignalError(OAI_copyMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use copyMessagesPostSignalError() instead")
    void copyMessagesPostSignalE(OAI_forwardMessages_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void copyMessagesPostSignalError(OAI_forwardMessages_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createChatInviteLinkPostSignalError() instead")
    void createChatInviteLinkPostSignalE(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createChatInviteLinkPostSignalError(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createChatSubscriptionInviteLinkPostSignalError() instead")
    void createChatSubscriptionInviteLinkPostSignalE(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createChatSubscriptionInviteLinkPostSignalError(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createForumTopicPostSignalError() instead")
    void createForumTopicPostSignalE(OAI_createForumTopic_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createForumTopicPostSignalError(OAI_createForumTopic_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createInvoiceLinkPostSignalError() instead")
    void createInvoiceLinkPostSignalE(OAI_exportChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createInvoiceLinkPostSignalError(OAI_exportChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createNewStickerSetPostSignalError() instead")
    void createNewStickerSetPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void createNewStickerSetPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use declineChatJoinRequestPostSignalError() instead")
    void declineChatJoinRequestPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void declineChatJoinRequestPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteBusinessMessagesPostSignalError() instead")
    void deleteBusinessMessagesPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteBusinessMessagesPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteChatPhotoPostSignalError() instead")
    void deleteChatPhotoPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteChatPhotoPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteChatStickerSetPostSignalError() instead")
    void deleteChatStickerSetPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteChatStickerSetPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteForumTopicPostSignalError() instead")
    void deleteForumTopicPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteForumTopicPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMessagePostSignalError() instead")
    void deleteMessagePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMessagePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMessagesPostSignalError() instead")
    void deleteMessagesPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMessagesPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMyCommandsPostSignalError() instead")
    void deleteMyCommandsPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMyCommandsPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteStickerFromSetPostSignalError() instead")
    void deleteStickerFromSetPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteStickerFromSetPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteStickerSetPostSignalError() instead")
    void deleteStickerSetPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteStickerSetPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteStoryPostSignalError() instead")
    void deleteStoryPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteStoryPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteWebhookPostSignalError() instead")
    void deleteWebhookPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteWebhookPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editChatInviteLinkPostSignalError() instead")
    void editChatInviteLinkPostSignalE(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editChatInviteLinkPostSignalError(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editChatSubscriptionInviteLinkPostSignalError() instead")
    void editChatSubscriptionInviteLinkPostSignalE(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editChatSubscriptionInviteLinkPostSignalError(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editForumTopicPostSignalError() instead")
    void editForumTopicPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editForumTopicPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editGeneralForumTopicPostSignalError() instead")
    void editGeneralForumTopicPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editGeneralForumTopicPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageCaptionPostSignalError() instead")
    void editMessageCaptionPostSignalE(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageCaptionPostSignalError(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageLiveLocationPostSignalError() instead")
    void editMessageLiveLocationPostSignalE(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageLiveLocationPostSignalError(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageMediaPostSignalError() instead")
    void editMessageMediaPostSignalE(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageMediaPostSignalError(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageReplyMarkupPostSignalError() instead")
    void editMessageReplyMarkupPostSignalE(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageReplyMarkupPostSignalError(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageTextPostSignalError() instead")
    void editMessageTextPostSignalE(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageTextPostSignalError(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editStoryPostSignalError() instead")
    void editStoryPostSignalE(OAI_postStory_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editStoryPostSignalError(OAI_postStory_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editUserStarSubscriptionPostSignalError() instead")
    void editUserStarSubscriptionPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void editUserStarSubscriptionPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use exportChatInviteLinkPostSignalError() instead")
    void exportChatInviteLinkPostSignalE(OAI_exportChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void exportChatInviteLinkPostSignalError(OAI_exportChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use forwardMessagePostSignalError() instead")
    void forwardMessagePostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void forwardMessagePostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use forwardMessagesPostSignalError() instead")
    void forwardMessagesPostSignalE(OAI_forwardMessages_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void forwardMessagesPostSignalError(OAI_forwardMessages_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getAvailableGiftsPostSignalError() instead")
    void getAvailableGiftsPostSignalE(OAI_getAvailableGifts_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getAvailableGiftsPostSignalError(OAI_getAvailableGifts_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getBusinessAccountGiftsPostSignalError() instead")
    void getBusinessAccountGiftsPostSignalE(OAI_getBusinessAccountGifts_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getBusinessAccountGiftsPostSignalError(OAI_getBusinessAccountGifts_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getBusinessAccountStarBalancePostSignalError() instead")
    void getBusinessAccountStarBalancePostSignalE(OAI_getBusinessAccountStarBalance_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getBusinessAccountStarBalancePostSignalError(OAI_getBusinessAccountStarBalance_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getBusinessConnectionPostSignalError() instead")
    void getBusinessConnectionPostSignalE(OAI_getBusinessConnection_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getBusinessConnectionPostSignalError(OAI_getBusinessConnection_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatAdministratorsPostSignalError() instead")
    void getChatAdministratorsPostSignalE(OAI_getChatAdministrators_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatAdministratorsPostSignalError(OAI_getChatAdministrators_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatMemberCountPostSignalError() instead")
    void getChatMemberCountPostSignalE(OAI_getChatMemberCount_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatMemberCountPostSignalError(OAI_getChatMemberCount_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatMemberPostSignalError() instead")
    void getChatMemberPostSignalE(OAI_getChatMember_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatMemberPostSignalError(OAI_getChatMember_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatMenuButtonPostSignalError() instead")
    void getChatMenuButtonPostSignalE(OAI_getChatMenuButton_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatMenuButtonPostSignalError(OAI_getChatMenuButton_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatPostSignalError() instead")
    void getChatPostSignalE(OAI_getChat_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatPostSignalError(OAI_getChat_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getCustomEmojiStickersPostSignalError() instead")
    void getCustomEmojiStickersPostSignalE(OAI_getForumTopicIconStickers_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getCustomEmojiStickersPostSignalError(OAI_getForumTopicIconStickers_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getFilePostSignalError() instead")
    void getFilePostSignalE(OAI_getFile_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getFilePostSignalError(OAI_getFile_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getForumTopicIconStickersPostSignalError() instead")
    void getForumTopicIconStickersPostSignalE(OAI_getForumTopicIconStickers_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getForumTopicIconStickersPostSignalError(OAI_getForumTopicIconStickers_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGameHighScoresPostSignalError() instead")
    void getGameHighScoresPostSignalE(OAI_getGameHighScores_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getGameHighScoresPostSignalError(OAI_getGameHighScores_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMePostSignalError() instead")
    void getMePostSignalE(OAI_getMe_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMePostSignalError(OAI_getMe_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyCommandsPostSignalError() instead")
    void getMyCommandsPostSignalE(OAI_getMyCommands_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyCommandsPostSignalError(OAI_getMyCommands_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyDefaultAdministratorRightsPostSignalError() instead")
    void getMyDefaultAdministratorRightsPostSignalE(OAI_getMyDefaultAdministratorRights_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyDefaultAdministratorRightsPostSignalError(OAI_getMyDefaultAdministratorRights_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyDescriptionPostSignalError() instead")
    void getMyDescriptionPostSignalE(OAI_getMyDescription_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyDescriptionPostSignalError(OAI_getMyDescription_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyNamePostSignalError() instead")
    void getMyNamePostSignalE(OAI_getMyName_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyNamePostSignalError(OAI_getMyName_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyShortDescriptionPostSignalError() instead")
    void getMyShortDescriptionPostSignalE(OAI_getMyShortDescription_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyShortDescriptionPostSignalError(OAI_getMyShortDescription_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStarTransactionsPostSignalError() instead")
    void getStarTransactionsPostSignalE(OAI_getStarTransactions_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getStarTransactionsPostSignalError(OAI_getStarTransactions_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStickerSetPostSignalError() instead")
    void getStickerSetPostSignalE(OAI_getStickerSet_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getStickerSetPostSignalError(OAI_getStickerSet_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUpdatesPostSignalError() instead")
    void getUpdatesPostSignalE(OAI_getUpdates_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getUpdatesPostSignalError(OAI_getUpdates_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUserChatBoostsPostSignalError() instead")
    void getUserChatBoostsPostSignalE(OAI_getUserChatBoosts_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserChatBoostsPostSignalError(OAI_getUserChatBoosts_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUserProfilePhotosPostSignalError() instead")
    void getUserProfilePhotosPostSignalE(OAI_getUserProfilePhotos_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserProfilePhotosPostSignalError(OAI_getUserProfilePhotos_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getWebhookInfoPostSignalError() instead")
    void getWebhookInfoPostSignalE(OAI_getWebhookInfo_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getWebhookInfoPostSignalError(OAI_getWebhookInfo_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use giftPremiumSubscriptionPostSignalError() instead")
    void giftPremiumSubscriptionPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void giftPremiumSubscriptionPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use hideGeneralForumTopicPostSignalError() instead")
    void hideGeneralForumTopicPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void hideGeneralForumTopicPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leaveChatPostSignalError() instead")
    void leaveChatPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void leaveChatPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use logOutPostSignalError() instead")
    void logOutPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void logOutPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use pinChatMessagePostSignalError() instead")
    void pinChatMessagePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void pinChatMessagePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postStoryPostSignalError() instead")
    void postStoryPostSignalE(OAI_postStory_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void postStoryPostSignalError(OAI_postStory_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use promoteChatMemberPostSignalError() instead")
    void promoteChatMemberPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void promoteChatMemberPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use readBusinessMessagePostSignalError() instead")
    void readBusinessMessagePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void readBusinessMessagePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use refundStarPaymentPostSignalError() instead")
    void refundStarPaymentPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void refundStarPaymentPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use removeBusinessAccountProfilePhotoPostSignalError() instead")
    void removeBusinessAccountProfilePhotoPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void removeBusinessAccountProfilePhotoPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use removeChatVerificationPostSignalError() instead")
    void removeChatVerificationPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void removeChatVerificationPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use removeUserVerificationPostSignalError() instead")
    void removeUserVerificationPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void removeUserVerificationPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use reopenForumTopicPostSignalError() instead")
    void reopenForumTopicPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void reopenForumTopicPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use reopenGeneralForumTopicPostSignalError() instead")
    void reopenGeneralForumTopicPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void reopenGeneralForumTopicPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use replaceStickerInSetPostSignalError() instead")
    void replaceStickerInSetPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void replaceStickerInSetPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use restrictChatMemberPostSignalError() instead")
    void restrictChatMemberPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void restrictChatMemberPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use revokeChatInviteLinkPostSignalError() instead")
    void revokeChatInviteLinkPostSignalE(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void revokeChatInviteLinkPostSignalError(OAI_createChatInviteLink_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use savePreparedInlineMessagePostSignalError() instead")
    void savePreparedInlineMessagePostSignalE(OAI_savePreparedInlineMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void savePreparedInlineMessagePostSignalError(OAI_savePreparedInlineMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendAnimationPostSignalError() instead")
    void sendAnimationPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendAnimationPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendAudioPostSignalError() instead")
    void sendAudioPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendAudioPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendChatActionPostSignalError() instead")
    void sendChatActionPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendChatActionPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendContactPostSignalError() instead")
    void sendContactPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendContactPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendDicePostSignalError() instead")
    void sendDicePostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendDicePostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendDocumentPostSignalError() instead")
    void sendDocumentPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendDocumentPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendGamePostSignalError() instead")
    void sendGamePostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendGamePostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendGiftPostSignalError() instead")
    void sendGiftPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendGiftPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendInvoicePostSignalError() instead")
    void sendInvoicePostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendInvoicePostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendLocationPostSignalError() instead")
    void sendLocationPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendLocationPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendMediaGroupPostSignalError() instead")
    void sendMediaGroupPostSignalE(OAI_sendMediaGroup_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendMediaGroupPostSignalError(OAI_sendMediaGroup_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendMessagePostSignalError() instead")
    void sendMessagePostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendMessagePostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendPaidMediaPostSignalError() instead")
    void sendPaidMediaPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendPaidMediaPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendPhotoPostSignalError() instead")
    void sendPhotoPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendPhotoPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendPollPostSignalError() instead")
    void sendPollPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendPollPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendStickerPostSignalError() instead")
    void sendStickerPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendStickerPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendVenuePostSignalError() instead")
    void sendVenuePostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendVenuePostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendVideoNotePostSignalError() instead")
    void sendVideoNotePostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendVideoNotePostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendVideoPostSignalError() instead")
    void sendVideoPostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendVideoPostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendVoicePostSignalError() instead")
    void sendVoicePostSignalE(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void sendVoicePostSignalError(OAI_sendMessage_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountBioPostSignalError() instead")
    void setBusinessAccountBioPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountBioPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountGiftSettingsPostSignalError() instead")
    void setBusinessAccountGiftSettingsPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountGiftSettingsPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountNamePostSignalError() instead")
    void setBusinessAccountNamePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountNamePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountProfilePhotoPostSignalError() instead")
    void setBusinessAccountProfilePhotoPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountProfilePhotoPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountUsernamePostSignalError() instead")
    void setBusinessAccountUsernamePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountUsernamePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatAdministratorCustomTitlePostSignalError() instead")
    void setChatAdministratorCustomTitlePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatAdministratorCustomTitlePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatDescriptionPostSignalError() instead")
    void setChatDescriptionPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatDescriptionPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatMenuButtonPostSignalError() instead")
    void setChatMenuButtonPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatMenuButtonPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatPermissionsPostSignalError() instead")
    void setChatPermissionsPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatPermissionsPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatPhotoPostSignalError() instead")
    void setChatPhotoPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatPhotoPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatStickerSetPostSignalError() instead")
    void setChatStickerSetPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatStickerSetPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatTitlePostSignalError() instead")
    void setChatTitlePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatTitlePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setCustomEmojiStickerSetThumbnailPostSignalError() instead")
    void setCustomEmojiStickerSetThumbnailPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setCustomEmojiStickerSetThumbnailPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setGameScorePostSignalError() instead")
    void setGameScorePostSignalE(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setGameScorePostSignalError(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMessageReactionPostSignalError() instead")
    void setMessageReactionPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setMessageReactionPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyCommandsPostSignalError() instead")
    void setMyCommandsPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyCommandsPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyDefaultAdministratorRightsPostSignalError() instead")
    void setMyDefaultAdministratorRightsPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyDefaultAdministratorRightsPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyDescriptionPostSignalError() instead")
    void setMyDescriptionPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyDescriptionPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyNamePostSignalError() instead")
    void setMyNamePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyNamePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyShortDescriptionPostSignalError() instead")
    void setMyShortDescriptionPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyShortDescriptionPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setPassportDataErrorsPostSignalError() instead")
    void setPassportDataErrorsPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setPassportDataErrorsPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerEmojiListPostSignalError() instead")
    void setStickerEmojiListPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerEmojiListPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerKeywordsPostSignalError() instead")
    void setStickerKeywordsPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerKeywordsPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerMaskPositionPostSignalError() instead")
    void setStickerMaskPositionPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerMaskPositionPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerPositionInSetPostSignalError() instead")
    void setStickerPositionInSetPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerPositionInSetPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerSetThumbnailPostSignalError() instead")
    void setStickerSetThumbnailPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerSetThumbnailPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerSetTitlePostSignalError() instead")
    void setStickerSetTitlePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerSetTitlePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setUserEmojiStatusPostSignalError() instead")
    void setUserEmojiStatusPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setUserEmojiStatusPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setWebhookPostSignalError() instead")
    void setWebhookPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void setWebhookPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use stopMessageLiveLocationPostSignalError() instead")
    void stopMessageLiveLocationPostSignalE(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void stopMessageLiveLocationPostSignalError(OAI_editMessageText_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use stopPollPostSignalError() instead")
    void stopPollPostSignalE(OAI_stopPoll_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void stopPollPostSignalError(OAI_stopPoll_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use transferBusinessAccountStarsPostSignalError() instead")
    void transferBusinessAccountStarsPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void transferBusinessAccountStarsPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use transferGiftPostSignalError() instead")
    void transferGiftPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void transferGiftPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unbanChatMemberPostSignalError() instead")
    void unbanChatMemberPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unbanChatMemberPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unbanChatSenderChatPostSignalError() instead")
    void unbanChatSenderChatPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unbanChatSenderChatPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unhideGeneralForumTopicPostSignalError() instead")
    void unhideGeneralForumTopicPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unhideGeneralForumTopicPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unpinAllChatMessagesPostSignalError() instead")
    void unpinAllChatMessagesPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unpinAllChatMessagesPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unpinAllForumTopicMessagesPostSignalError() instead")
    void unpinAllForumTopicMessagesPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unpinAllForumTopicMessagesPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unpinAllGeneralForumTopicMessagesPostSignalError() instead")
    void unpinAllGeneralForumTopicMessagesPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unpinAllGeneralForumTopicMessagesPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unpinChatMessagePostSignalError() instead")
    void unpinChatMessagePostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void unpinChatMessagePostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use upgradeGiftPostSignalError() instead")
    void upgradeGiftPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void upgradeGiftPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use uploadStickerFilePostSignalError() instead")
    void uploadStickerFilePostSignalE(OAI_getFile_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void uploadStickerFilePostSignalError(OAI_getFile_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use verifyChatPostSignalError() instead")
    void verifyChatPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void verifyChatPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use verifyUserPostSignalError() instead")
    void verifyUserPostSignalE(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, QString error_str);
    void verifyUserPostSignalError(OAI_setWebhook_post_200_response summary, QNetworkReply::NetworkError error_type, const QString &error_str);

    Q_DECL_DEPRECATED_X("Use addStickerToSetPostSignalErrorFull() instead")
    void addStickerToSetPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void addStickerToSetPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerCallbackQueryPostSignalErrorFull() instead")
    void answerCallbackQueryPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void answerCallbackQueryPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerInlineQueryPostSignalErrorFull() instead")
    void answerInlineQueryPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void answerInlineQueryPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerPreCheckoutQueryPostSignalErrorFull() instead")
    void answerPreCheckoutQueryPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void answerPreCheckoutQueryPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerShippingQueryPostSignalErrorFull() instead")
    void answerShippingQueryPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void answerShippingQueryPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use answerWebAppQueryPostSignalErrorFull() instead")
    void answerWebAppQueryPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void answerWebAppQueryPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use approveChatJoinRequestPostSignalErrorFull() instead")
    void approveChatJoinRequestPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void approveChatJoinRequestPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use banChatMemberPostSignalErrorFull() instead")
    void banChatMemberPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void banChatMemberPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use banChatSenderChatPostSignalErrorFull() instead")
    void banChatSenderChatPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void banChatSenderChatPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use closeForumTopicPostSignalErrorFull() instead")
    void closeForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void closeForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use closeGeneralForumTopicPostSignalErrorFull() instead")
    void closeGeneralForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void closeGeneralForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use closePostSignalErrorFull() instead")
    void closePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void closePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use convertGiftToStarsPostSignalErrorFull() instead")
    void convertGiftToStarsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void convertGiftToStarsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use copyMessagePostSignalErrorFull() instead")
    void copyMessagePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void copyMessagePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use copyMessagesPostSignalErrorFull() instead")
    void copyMessagesPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void copyMessagesPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createChatInviteLinkPostSignalErrorFull() instead")
    void createChatInviteLinkPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createChatInviteLinkPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createChatSubscriptionInviteLinkPostSignalErrorFull() instead")
    void createChatSubscriptionInviteLinkPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createChatSubscriptionInviteLinkPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createForumTopicPostSignalErrorFull() instead")
    void createForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createInvoiceLinkPostSignalErrorFull() instead")
    void createInvoiceLinkPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createInvoiceLinkPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use createNewStickerSetPostSignalErrorFull() instead")
    void createNewStickerSetPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void createNewStickerSetPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use declineChatJoinRequestPostSignalErrorFull() instead")
    void declineChatJoinRequestPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void declineChatJoinRequestPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteBusinessMessagesPostSignalErrorFull() instead")
    void deleteBusinessMessagesPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteBusinessMessagesPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteChatPhotoPostSignalErrorFull() instead")
    void deleteChatPhotoPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteChatPhotoPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteChatStickerSetPostSignalErrorFull() instead")
    void deleteChatStickerSetPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteChatStickerSetPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteForumTopicPostSignalErrorFull() instead")
    void deleteForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMessagePostSignalErrorFull() instead")
    void deleteMessagePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMessagePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMessagesPostSignalErrorFull() instead")
    void deleteMessagesPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMessagesPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteMyCommandsPostSignalErrorFull() instead")
    void deleteMyCommandsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteMyCommandsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteStickerFromSetPostSignalErrorFull() instead")
    void deleteStickerFromSetPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteStickerFromSetPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteStickerSetPostSignalErrorFull() instead")
    void deleteStickerSetPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteStickerSetPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteStoryPostSignalErrorFull() instead")
    void deleteStoryPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteStoryPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use deleteWebhookPostSignalErrorFull() instead")
    void deleteWebhookPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void deleteWebhookPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editChatInviteLinkPostSignalErrorFull() instead")
    void editChatInviteLinkPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editChatInviteLinkPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editChatSubscriptionInviteLinkPostSignalErrorFull() instead")
    void editChatSubscriptionInviteLinkPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editChatSubscriptionInviteLinkPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editForumTopicPostSignalErrorFull() instead")
    void editForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editGeneralForumTopicPostSignalErrorFull() instead")
    void editGeneralForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editGeneralForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageCaptionPostSignalErrorFull() instead")
    void editMessageCaptionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageCaptionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageLiveLocationPostSignalErrorFull() instead")
    void editMessageLiveLocationPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageLiveLocationPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageMediaPostSignalErrorFull() instead")
    void editMessageMediaPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageMediaPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageReplyMarkupPostSignalErrorFull() instead")
    void editMessageReplyMarkupPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageReplyMarkupPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editMessageTextPostSignalErrorFull() instead")
    void editMessageTextPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editMessageTextPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editStoryPostSignalErrorFull() instead")
    void editStoryPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editStoryPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use editUserStarSubscriptionPostSignalErrorFull() instead")
    void editUserStarSubscriptionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void editUserStarSubscriptionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use exportChatInviteLinkPostSignalErrorFull() instead")
    void exportChatInviteLinkPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void exportChatInviteLinkPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use forwardMessagePostSignalErrorFull() instead")
    void forwardMessagePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void forwardMessagePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use forwardMessagesPostSignalErrorFull() instead")
    void forwardMessagesPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void forwardMessagesPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getAvailableGiftsPostSignalErrorFull() instead")
    void getAvailableGiftsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getAvailableGiftsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getBusinessAccountGiftsPostSignalErrorFull() instead")
    void getBusinessAccountGiftsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getBusinessAccountGiftsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getBusinessAccountStarBalancePostSignalErrorFull() instead")
    void getBusinessAccountStarBalancePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getBusinessAccountStarBalancePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getBusinessConnectionPostSignalErrorFull() instead")
    void getBusinessConnectionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getBusinessConnectionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatAdministratorsPostSignalErrorFull() instead")
    void getChatAdministratorsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatAdministratorsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatMemberCountPostSignalErrorFull() instead")
    void getChatMemberCountPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatMemberCountPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatMemberPostSignalErrorFull() instead")
    void getChatMemberPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatMemberPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatMenuButtonPostSignalErrorFull() instead")
    void getChatMenuButtonPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatMenuButtonPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getChatPostSignalErrorFull() instead")
    void getChatPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getChatPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getCustomEmojiStickersPostSignalErrorFull() instead")
    void getCustomEmojiStickersPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getCustomEmojiStickersPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getFilePostSignalErrorFull() instead")
    void getFilePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getFilePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getForumTopicIconStickersPostSignalErrorFull() instead")
    void getForumTopicIconStickersPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getForumTopicIconStickersPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getGameHighScoresPostSignalErrorFull() instead")
    void getGameHighScoresPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getGameHighScoresPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMePostSignalErrorFull() instead")
    void getMePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyCommandsPostSignalErrorFull() instead")
    void getMyCommandsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyCommandsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyDefaultAdministratorRightsPostSignalErrorFull() instead")
    void getMyDefaultAdministratorRightsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyDefaultAdministratorRightsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyDescriptionPostSignalErrorFull() instead")
    void getMyDescriptionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyDescriptionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyNamePostSignalErrorFull() instead")
    void getMyNamePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyNamePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getMyShortDescriptionPostSignalErrorFull() instead")
    void getMyShortDescriptionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getMyShortDescriptionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStarTransactionsPostSignalErrorFull() instead")
    void getStarTransactionsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getStarTransactionsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getStickerSetPostSignalErrorFull() instead")
    void getStickerSetPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getStickerSetPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUpdatesPostSignalErrorFull() instead")
    void getUpdatesPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getUpdatesPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUserChatBoostsPostSignalErrorFull() instead")
    void getUserChatBoostsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserChatBoostsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getUserProfilePhotosPostSignalErrorFull() instead")
    void getUserProfilePhotosPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getUserProfilePhotosPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use getWebhookInfoPostSignalErrorFull() instead")
    void getWebhookInfoPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getWebhookInfoPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use giftPremiumSubscriptionPostSignalErrorFull() instead")
    void giftPremiumSubscriptionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void giftPremiumSubscriptionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use hideGeneralForumTopicPostSignalErrorFull() instead")
    void hideGeneralForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void hideGeneralForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use leaveChatPostSignalErrorFull() instead")
    void leaveChatPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void leaveChatPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use logOutPostSignalErrorFull() instead")
    void logOutPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void logOutPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use pinChatMessagePostSignalErrorFull() instead")
    void pinChatMessagePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void pinChatMessagePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use postStoryPostSignalErrorFull() instead")
    void postStoryPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void postStoryPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use promoteChatMemberPostSignalErrorFull() instead")
    void promoteChatMemberPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void promoteChatMemberPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use readBusinessMessagePostSignalErrorFull() instead")
    void readBusinessMessagePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void readBusinessMessagePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use refundStarPaymentPostSignalErrorFull() instead")
    void refundStarPaymentPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void refundStarPaymentPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use removeBusinessAccountProfilePhotoPostSignalErrorFull() instead")
    void removeBusinessAccountProfilePhotoPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void removeBusinessAccountProfilePhotoPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use removeChatVerificationPostSignalErrorFull() instead")
    void removeChatVerificationPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void removeChatVerificationPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use removeUserVerificationPostSignalErrorFull() instead")
    void removeUserVerificationPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void removeUserVerificationPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use reopenForumTopicPostSignalErrorFull() instead")
    void reopenForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void reopenForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use reopenGeneralForumTopicPostSignalErrorFull() instead")
    void reopenGeneralForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void reopenGeneralForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use replaceStickerInSetPostSignalErrorFull() instead")
    void replaceStickerInSetPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void replaceStickerInSetPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use restrictChatMemberPostSignalErrorFull() instead")
    void restrictChatMemberPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void restrictChatMemberPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use revokeChatInviteLinkPostSignalErrorFull() instead")
    void revokeChatInviteLinkPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void revokeChatInviteLinkPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use savePreparedInlineMessagePostSignalErrorFull() instead")
    void savePreparedInlineMessagePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void savePreparedInlineMessagePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendAnimationPostSignalErrorFull() instead")
    void sendAnimationPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendAnimationPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendAudioPostSignalErrorFull() instead")
    void sendAudioPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendAudioPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendChatActionPostSignalErrorFull() instead")
    void sendChatActionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendChatActionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendContactPostSignalErrorFull() instead")
    void sendContactPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendContactPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendDicePostSignalErrorFull() instead")
    void sendDicePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendDicePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendDocumentPostSignalErrorFull() instead")
    void sendDocumentPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendDocumentPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendGamePostSignalErrorFull() instead")
    void sendGamePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendGamePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendGiftPostSignalErrorFull() instead")
    void sendGiftPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendGiftPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendInvoicePostSignalErrorFull() instead")
    void sendInvoicePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendInvoicePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendLocationPostSignalErrorFull() instead")
    void sendLocationPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendLocationPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendMediaGroupPostSignalErrorFull() instead")
    void sendMediaGroupPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendMediaGroupPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendMessagePostSignalErrorFull() instead")
    void sendMessagePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendMessagePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendPaidMediaPostSignalErrorFull() instead")
    void sendPaidMediaPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendPaidMediaPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendPhotoPostSignalErrorFull() instead")
    void sendPhotoPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendPhotoPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendPollPostSignalErrorFull() instead")
    void sendPollPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendPollPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendStickerPostSignalErrorFull() instead")
    void sendStickerPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendStickerPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendVenuePostSignalErrorFull() instead")
    void sendVenuePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendVenuePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendVideoNotePostSignalErrorFull() instead")
    void sendVideoNotePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendVideoNotePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendVideoPostSignalErrorFull() instead")
    void sendVideoPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendVideoPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use sendVoicePostSignalErrorFull() instead")
    void sendVoicePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void sendVoicePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountBioPostSignalErrorFull() instead")
    void setBusinessAccountBioPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountBioPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountGiftSettingsPostSignalErrorFull() instead")
    void setBusinessAccountGiftSettingsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountGiftSettingsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountNamePostSignalErrorFull() instead")
    void setBusinessAccountNamePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountNamePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountProfilePhotoPostSignalErrorFull() instead")
    void setBusinessAccountProfilePhotoPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountProfilePhotoPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setBusinessAccountUsernamePostSignalErrorFull() instead")
    void setBusinessAccountUsernamePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setBusinessAccountUsernamePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatAdministratorCustomTitlePostSignalErrorFull() instead")
    void setChatAdministratorCustomTitlePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatAdministratorCustomTitlePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatDescriptionPostSignalErrorFull() instead")
    void setChatDescriptionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatDescriptionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatMenuButtonPostSignalErrorFull() instead")
    void setChatMenuButtonPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatMenuButtonPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatPermissionsPostSignalErrorFull() instead")
    void setChatPermissionsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatPermissionsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatPhotoPostSignalErrorFull() instead")
    void setChatPhotoPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatPhotoPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatStickerSetPostSignalErrorFull() instead")
    void setChatStickerSetPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatStickerSetPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setChatTitlePostSignalErrorFull() instead")
    void setChatTitlePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setChatTitlePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setCustomEmojiStickerSetThumbnailPostSignalErrorFull() instead")
    void setCustomEmojiStickerSetThumbnailPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setCustomEmojiStickerSetThumbnailPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setGameScorePostSignalErrorFull() instead")
    void setGameScorePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setGameScorePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMessageReactionPostSignalErrorFull() instead")
    void setMessageReactionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setMessageReactionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyCommandsPostSignalErrorFull() instead")
    void setMyCommandsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyCommandsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyDefaultAdministratorRightsPostSignalErrorFull() instead")
    void setMyDefaultAdministratorRightsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyDefaultAdministratorRightsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyDescriptionPostSignalErrorFull() instead")
    void setMyDescriptionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyDescriptionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyNamePostSignalErrorFull() instead")
    void setMyNamePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyNamePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setMyShortDescriptionPostSignalErrorFull() instead")
    void setMyShortDescriptionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setMyShortDescriptionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setPassportDataErrorsPostSignalErrorFull() instead")
    void setPassportDataErrorsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setPassportDataErrorsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerEmojiListPostSignalErrorFull() instead")
    void setStickerEmojiListPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerEmojiListPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerKeywordsPostSignalErrorFull() instead")
    void setStickerKeywordsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerKeywordsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerMaskPositionPostSignalErrorFull() instead")
    void setStickerMaskPositionPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerMaskPositionPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerPositionInSetPostSignalErrorFull() instead")
    void setStickerPositionInSetPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerPositionInSetPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerSetThumbnailPostSignalErrorFull() instead")
    void setStickerSetThumbnailPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerSetThumbnailPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setStickerSetTitlePostSignalErrorFull() instead")
    void setStickerSetTitlePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setStickerSetTitlePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setUserEmojiStatusPostSignalErrorFull() instead")
    void setUserEmojiStatusPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setUserEmojiStatusPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use setWebhookPostSignalErrorFull() instead")
    void setWebhookPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void setWebhookPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use stopMessageLiveLocationPostSignalErrorFull() instead")
    void stopMessageLiveLocationPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void stopMessageLiveLocationPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use stopPollPostSignalErrorFull() instead")
    void stopPollPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void stopPollPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use transferBusinessAccountStarsPostSignalErrorFull() instead")
    void transferBusinessAccountStarsPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void transferBusinessAccountStarsPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use transferGiftPostSignalErrorFull() instead")
    void transferGiftPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void transferGiftPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unbanChatMemberPostSignalErrorFull() instead")
    void unbanChatMemberPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unbanChatMemberPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unbanChatSenderChatPostSignalErrorFull() instead")
    void unbanChatSenderChatPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unbanChatSenderChatPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unhideGeneralForumTopicPostSignalErrorFull() instead")
    void unhideGeneralForumTopicPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unhideGeneralForumTopicPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unpinAllChatMessagesPostSignalErrorFull() instead")
    void unpinAllChatMessagesPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unpinAllChatMessagesPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unpinAllForumTopicMessagesPostSignalErrorFull() instead")
    void unpinAllForumTopicMessagesPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unpinAllForumTopicMessagesPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unpinAllGeneralForumTopicMessagesPostSignalErrorFull() instead")
    void unpinAllGeneralForumTopicMessagesPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unpinAllGeneralForumTopicMessagesPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use unpinChatMessagePostSignalErrorFull() instead")
    void unpinChatMessagePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void unpinChatMessagePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use upgradeGiftPostSignalErrorFull() instead")
    void upgradeGiftPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void upgradeGiftPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use uploadStickerFilePostSignalErrorFull() instead")
    void uploadStickerFilePostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void uploadStickerFilePostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use verifyChatPostSignalErrorFull() instead")
    void verifyChatPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void verifyChatPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);
    Q_DECL_DEPRECATED_X("Use verifyUserPostSignalErrorFull() instead")
    void verifyUserPostSignalEFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, QString error_str);
    void verifyUserPostSignalErrorFull(OAIHttpRequestWorker *worker, QNetworkReply::NetworkError error_type, const QString &error_str);

    void abortRequestsSignal();
    void allPendingRequestsCompleted();

public Q_SLOTS:
    void tokenAvailable();
};

} // namespace tele_rest
#endif
