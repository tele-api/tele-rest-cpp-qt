/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
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

#include "OAI_editMessageText_post_200_response_result.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_editMessageText_post_200_response_result::OAI_editMessageText_post_200_response_result(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_editMessageText_post_200_response_result::OAI_editMessageText_post_200_response_result() {
    this->initializeModel();
}

OAI_editMessageText_post_200_response_result::~OAI_editMessageText_post_200_response_result() {}

void OAI_editMessageText_post_200_response_result::initializeModel() {

    m_message_id_isSet = false;
    m_message_id_isValid = false;

    m_date_isSet = false;
    m_date_isValid = false;

    m_chat_isSet = false;
    m_chat_isValid = false;

    m_message_thread_id_isSet = false;
    m_message_thread_id_isValid = false;

    m_from_isSet = false;
    m_from_isValid = false;

    m_sender_chat_isSet = false;
    m_sender_chat_isValid = false;

    m_sender_boost_count_isSet = false;
    m_sender_boost_count_isValid = false;

    m_sender_business_bot_isSet = false;
    m_sender_business_bot_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_forward_origin_isSet = false;
    m_forward_origin_isValid = false;

    m_is_topic_message_isSet = false;
    m_is_topic_message_isValid = false;

    m_is_automatic_forward_isSet = false;
    m_is_automatic_forward_isValid = false;

    m_reply_to_message_isSet = false;
    m_reply_to_message_isValid = false;

    m_external_reply_isSet = false;
    m_external_reply_isValid = false;

    m_quote_isSet = false;
    m_quote_isValid = false;

    m_reply_to_story_isSet = false;
    m_reply_to_story_isValid = false;

    m_via_bot_isSet = false;
    m_via_bot_isValid = false;

    m_edit_date_isSet = false;
    m_edit_date_isValid = false;

    m_has_protected_content_isSet = false;
    m_has_protected_content_isValid = false;

    m_is_from_offline_isSet = false;
    m_is_from_offline_isValid = false;

    m_media_group_id_isSet = false;
    m_media_group_id_isValid = false;

    m_author_signature_isSet = false;
    m_author_signature_isValid = false;

    m_paid_star_count_isSet = false;
    m_paid_star_count_isValid = false;

    m_text_isSet = false;
    m_text_isValid = false;

    m_entities_isSet = false;
    m_entities_isValid = false;

    m_link_preview_options_isSet = false;
    m_link_preview_options_isValid = false;

    m_effect_id_isSet = false;
    m_effect_id_isValid = false;

    m_animation_isSet = false;
    m_animation_isValid = false;

    m_audio_isSet = false;
    m_audio_isValid = false;

    m_document_isSet = false;
    m_document_isValid = false;

    m_paid_media_isSet = false;
    m_paid_media_isValid = false;

    m_photo_isSet = false;
    m_photo_isValid = false;

    m_sticker_isSet = false;
    m_sticker_isValid = false;

    m_story_isSet = false;
    m_story_isValid = false;

    m_video_isSet = false;
    m_video_isValid = false;

    m_video_note_isSet = false;
    m_video_note_isValid = false;

    m_voice_isSet = false;
    m_voice_isValid = false;

    m_caption_isSet = false;
    m_caption_isValid = false;

    m_caption_entities_isSet = false;
    m_caption_entities_isValid = false;

    m_show_caption_above_media_isSet = false;
    m_show_caption_above_media_isValid = false;

    m_has_media_spoiler_isSet = false;
    m_has_media_spoiler_isValid = false;

    m_contact_isSet = false;
    m_contact_isValid = false;

    m_dice_isSet = false;
    m_dice_isValid = false;

    m_game_isSet = false;
    m_game_isValid = false;

    m_poll_isSet = false;
    m_poll_isValid = false;

    m_venue_isSet = false;
    m_venue_isValid = false;

    m_location_isSet = false;
    m_location_isValid = false;

    m_new_chat_members_isSet = false;
    m_new_chat_members_isValid = false;

    m_left_chat_member_isSet = false;
    m_left_chat_member_isValid = false;

    m_new_chat_title_isSet = false;
    m_new_chat_title_isValid = false;

    m_new_chat_photo_isSet = false;
    m_new_chat_photo_isValid = false;

    m_delete_chat_photo_isSet = false;
    m_delete_chat_photo_isValid = false;

    m_group_chat_created_isSet = false;
    m_group_chat_created_isValid = false;

    m_supergroup_chat_created_isSet = false;
    m_supergroup_chat_created_isValid = false;

    m_channel_chat_created_isSet = false;
    m_channel_chat_created_isValid = false;

    m_message_auto_delete_timer_changed_isSet = false;
    m_message_auto_delete_timer_changed_isValid = false;

    m_migrate_to_chat_id_isSet = false;
    m_migrate_to_chat_id_isValid = false;

    m_migrate_from_chat_id_isSet = false;
    m_migrate_from_chat_id_isValid = false;

    m_pinned_message_isSet = false;
    m_pinned_message_isValid = false;

    m_invoice_isSet = false;
    m_invoice_isValid = false;

    m_successful_payment_isSet = false;
    m_successful_payment_isValid = false;

    m_refunded_payment_isSet = false;
    m_refunded_payment_isValid = false;

    m_users_shared_isSet = false;
    m_users_shared_isValid = false;

    m_chat_shared_isSet = false;
    m_chat_shared_isValid = false;

    m_gift_isSet = false;
    m_gift_isValid = false;

    m_unique_gift_isSet = false;
    m_unique_gift_isValid = false;

    m_connected_website_isSet = false;
    m_connected_website_isValid = false;

    m_write_access_allowed_isSet = false;
    m_write_access_allowed_isValid = false;

    m_passport_data_isSet = false;
    m_passport_data_isValid = false;

    m_proximity_alert_triggered_isSet = false;
    m_proximity_alert_triggered_isValid = false;

    m_boost_added_isSet = false;
    m_boost_added_isValid = false;

    m_chat_background_set_isSet = false;
    m_chat_background_set_isValid = false;

    m_forum_topic_created_isSet = false;
    m_forum_topic_created_isValid = false;

    m_forum_topic_edited_isSet = false;
    m_forum_topic_edited_isValid = false;

    m_forum_topic_closed_isSet = false;
    m_forum_topic_closed_isValid = false;

    m_forum_topic_reopened_isSet = false;
    m_forum_topic_reopened_isValid = false;

    m_general_forum_topic_hidden_isSet = false;
    m_general_forum_topic_hidden_isValid = false;

    m_general_forum_topic_unhidden_isSet = false;
    m_general_forum_topic_unhidden_isValid = false;

    m_giveaway_created_isSet = false;
    m_giveaway_created_isValid = false;

    m_giveaway_isSet = false;
    m_giveaway_isValid = false;

    m_giveaway_winners_isSet = false;
    m_giveaway_winners_isValid = false;

    m_giveaway_completed_isSet = false;
    m_giveaway_completed_isValid = false;

    m_paid_message_price_changed_isSet = false;
    m_paid_message_price_changed_isValid = false;

    m_video_chat_scheduled_isSet = false;
    m_video_chat_scheduled_isValid = false;

    m_video_chat_started_isSet = false;
    m_video_chat_started_isValid = false;

    m_video_chat_ended_isSet = false;
    m_video_chat_ended_isValid = false;

    m_video_chat_participants_invited_isSet = false;
    m_video_chat_participants_invited_isValid = false;

    m_web_app_data_isSet = false;
    m_web_app_data_isValid = false;

    m_reply_markup_isSet = false;
    m_reply_markup_isValid = false;
}

void OAI_editMessageText_post_200_response_result::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_editMessageText_post_200_response_result::fromJsonObject(QJsonObject json) {

    m_message_id_isValid = ::tele_rest::fromJsonValue(m_message_id, json[QString("message_id")]);
    m_message_id_isSet = !json[QString("message_id")].isNull() && m_message_id_isValid;

    m_date_isValid = ::tele_rest::fromJsonValue(m_date, json[QString("date")]);
    m_date_isSet = !json[QString("date")].isNull() && m_date_isValid;

    m_chat_isValid = ::tele_rest::fromJsonValue(m_chat, json[QString("chat")]);
    m_chat_isSet = !json[QString("chat")].isNull() && m_chat_isValid;

    m_message_thread_id_isValid = ::tele_rest::fromJsonValue(m_message_thread_id, json[QString("message_thread_id")]);
    m_message_thread_id_isSet = !json[QString("message_thread_id")].isNull() && m_message_thread_id_isValid;

    m_from_isValid = ::tele_rest::fromJsonValue(m_from, json[QString("from")]);
    m_from_isSet = !json[QString("from")].isNull() && m_from_isValid;

    m_sender_chat_isValid = ::tele_rest::fromJsonValue(m_sender_chat, json[QString("sender_chat")]);
    m_sender_chat_isSet = !json[QString("sender_chat")].isNull() && m_sender_chat_isValid;

    m_sender_boost_count_isValid = ::tele_rest::fromJsonValue(m_sender_boost_count, json[QString("sender_boost_count")]);
    m_sender_boost_count_isSet = !json[QString("sender_boost_count")].isNull() && m_sender_boost_count_isValid;

    m_sender_business_bot_isValid = ::tele_rest::fromJsonValue(m_sender_business_bot, json[QString("sender_business_bot")]);
    m_sender_business_bot_isSet = !json[QString("sender_business_bot")].isNull() && m_sender_business_bot_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_forward_origin_isValid = ::tele_rest::fromJsonValue(m_forward_origin, json[QString("forward_origin")]);
    m_forward_origin_isSet = !json[QString("forward_origin")].isNull() && m_forward_origin_isValid;

    m_is_topic_message_isValid = ::tele_rest::fromJsonValue(m_is_topic_message, json[QString("is_topic_message")]);
    m_is_topic_message_isSet = !json[QString("is_topic_message")].isNull() && m_is_topic_message_isValid;

    m_is_automatic_forward_isValid = ::tele_rest::fromJsonValue(m_is_automatic_forward, json[QString("is_automatic_forward")]);
    m_is_automatic_forward_isSet = !json[QString("is_automatic_forward")].isNull() && m_is_automatic_forward_isValid;

    m_reply_to_message_isValid = ::tele_rest::fromJsonValue(m_reply_to_message, json[QString("reply_to_message")]);
    m_reply_to_message_isSet = !json[QString("reply_to_message")].isNull() && m_reply_to_message_isValid;

    m_external_reply_isValid = ::tele_rest::fromJsonValue(m_external_reply, json[QString("external_reply")]);
    m_external_reply_isSet = !json[QString("external_reply")].isNull() && m_external_reply_isValid;

    m_quote_isValid = ::tele_rest::fromJsonValue(m_quote, json[QString("quote")]);
    m_quote_isSet = !json[QString("quote")].isNull() && m_quote_isValid;

    m_reply_to_story_isValid = ::tele_rest::fromJsonValue(m_reply_to_story, json[QString("reply_to_story")]);
    m_reply_to_story_isSet = !json[QString("reply_to_story")].isNull() && m_reply_to_story_isValid;

    m_via_bot_isValid = ::tele_rest::fromJsonValue(m_via_bot, json[QString("via_bot")]);
    m_via_bot_isSet = !json[QString("via_bot")].isNull() && m_via_bot_isValid;

    m_edit_date_isValid = ::tele_rest::fromJsonValue(m_edit_date, json[QString("edit_date")]);
    m_edit_date_isSet = !json[QString("edit_date")].isNull() && m_edit_date_isValid;

    m_has_protected_content_isValid = ::tele_rest::fromJsonValue(m_has_protected_content, json[QString("has_protected_content")]);
    m_has_protected_content_isSet = !json[QString("has_protected_content")].isNull() && m_has_protected_content_isValid;

    m_is_from_offline_isValid = ::tele_rest::fromJsonValue(m_is_from_offline, json[QString("is_from_offline")]);
    m_is_from_offline_isSet = !json[QString("is_from_offline")].isNull() && m_is_from_offline_isValid;

    m_media_group_id_isValid = ::tele_rest::fromJsonValue(m_media_group_id, json[QString("media_group_id")]);
    m_media_group_id_isSet = !json[QString("media_group_id")].isNull() && m_media_group_id_isValid;

    m_author_signature_isValid = ::tele_rest::fromJsonValue(m_author_signature, json[QString("author_signature")]);
    m_author_signature_isSet = !json[QString("author_signature")].isNull() && m_author_signature_isValid;

    m_paid_star_count_isValid = ::tele_rest::fromJsonValue(m_paid_star_count, json[QString("paid_star_count")]);
    m_paid_star_count_isSet = !json[QString("paid_star_count")].isNull() && m_paid_star_count_isValid;

    m_text_isValid = ::tele_rest::fromJsonValue(m_text, json[QString("text")]);
    m_text_isSet = !json[QString("text")].isNull() && m_text_isValid;

    m_entities_isValid = ::tele_rest::fromJsonValue(m_entities, json[QString("entities")]);
    m_entities_isSet = !json[QString("entities")].isNull() && m_entities_isValid;

    m_link_preview_options_isValid = ::tele_rest::fromJsonValue(m_link_preview_options, json[QString("link_preview_options")]);
    m_link_preview_options_isSet = !json[QString("link_preview_options")].isNull() && m_link_preview_options_isValid;

    m_effect_id_isValid = ::tele_rest::fromJsonValue(m_effect_id, json[QString("effect_id")]);
    m_effect_id_isSet = !json[QString("effect_id")].isNull() && m_effect_id_isValid;

    m_animation_isValid = ::tele_rest::fromJsonValue(m_animation, json[QString("animation")]);
    m_animation_isSet = !json[QString("animation")].isNull() && m_animation_isValid;

    m_audio_isValid = ::tele_rest::fromJsonValue(m_audio, json[QString("audio")]);
    m_audio_isSet = !json[QString("audio")].isNull() && m_audio_isValid;

    m_document_isValid = ::tele_rest::fromJsonValue(m_document, json[QString("document")]);
    m_document_isSet = !json[QString("document")].isNull() && m_document_isValid;

    m_paid_media_isValid = ::tele_rest::fromJsonValue(m_paid_media, json[QString("paid_media")]);
    m_paid_media_isSet = !json[QString("paid_media")].isNull() && m_paid_media_isValid;

    m_photo_isValid = ::tele_rest::fromJsonValue(m_photo, json[QString("photo")]);
    m_photo_isSet = !json[QString("photo")].isNull() && m_photo_isValid;

    m_sticker_isValid = ::tele_rest::fromJsonValue(m_sticker, json[QString("sticker")]);
    m_sticker_isSet = !json[QString("sticker")].isNull() && m_sticker_isValid;

    m_story_isValid = ::tele_rest::fromJsonValue(m_story, json[QString("story")]);
    m_story_isSet = !json[QString("story")].isNull() && m_story_isValid;

    m_video_isValid = ::tele_rest::fromJsonValue(m_video, json[QString("video")]);
    m_video_isSet = !json[QString("video")].isNull() && m_video_isValid;

    m_video_note_isValid = ::tele_rest::fromJsonValue(m_video_note, json[QString("video_note")]);
    m_video_note_isSet = !json[QString("video_note")].isNull() && m_video_note_isValid;

    m_voice_isValid = ::tele_rest::fromJsonValue(m_voice, json[QString("voice")]);
    m_voice_isSet = !json[QString("voice")].isNull() && m_voice_isValid;

    m_caption_isValid = ::tele_rest::fromJsonValue(m_caption, json[QString("caption")]);
    m_caption_isSet = !json[QString("caption")].isNull() && m_caption_isValid;

    m_caption_entities_isValid = ::tele_rest::fromJsonValue(m_caption_entities, json[QString("caption_entities")]);
    m_caption_entities_isSet = !json[QString("caption_entities")].isNull() && m_caption_entities_isValid;

    m_show_caption_above_media_isValid = ::tele_rest::fromJsonValue(m_show_caption_above_media, json[QString("show_caption_above_media")]);
    m_show_caption_above_media_isSet = !json[QString("show_caption_above_media")].isNull() && m_show_caption_above_media_isValid;

    m_has_media_spoiler_isValid = ::tele_rest::fromJsonValue(m_has_media_spoiler, json[QString("has_media_spoiler")]);
    m_has_media_spoiler_isSet = !json[QString("has_media_spoiler")].isNull() && m_has_media_spoiler_isValid;

    m_contact_isValid = ::tele_rest::fromJsonValue(m_contact, json[QString("contact")]);
    m_contact_isSet = !json[QString("contact")].isNull() && m_contact_isValid;

    m_dice_isValid = ::tele_rest::fromJsonValue(m_dice, json[QString("dice")]);
    m_dice_isSet = !json[QString("dice")].isNull() && m_dice_isValid;

    m_game_isValid = ::tele_rest::fromJsonValue(m_game, json[QString("game")]);
    m_game_isSet = !json[QString("game")].isNull() && m_game_isValid;

    m_poll_isValid = ::tele_rest::fromJsonValue(m_poll, json[QString("poll")]);
    m_poll_isSet = !json[QString("poll")].isNull() && m_poll_isValid;

    m_venue_isValid = ::tele_rest::fromJsonValue(m_venue, json[QString("venue")]);
    m_venue_isSet = !json[QString("venue")].isNull() && m_venue_isValid;

    m_location_isValid = ::tele_rest::fromJsonValue(m_location, json[QString("location")]);
    m_location_isSet = !json[QString("location")].isNull() && m_location_isValid;

    m_new_chat_members_isValid = ::tele_rest::fromJsonValue(m_new_chat_members, json[QString("new_chat_members")]);
    m_new_chat_members_isSet = !json[QString("new_chat_members")].isNull() && m_new_chat_members_isValid;

    m_left_chat_member_isValid = ::tele_rest::fromJsonValue(m_left_chat_member, json[QString("left_chat_member")]);
    m_left_chat_member_isSet = !json[QString("left_chat_member")].isNull() && m_left_chat_member_isValid;

    m_new_chat_title_isValid = ::tele_rest::fromJsonValue(m_new_chat_title, json[QString("new_chat_title")]);
    m_new_chat_title_isSet = !json[QString("new_chat_title")].isNull() && m_new_chat_title_isValid;

    m_new_chat_photo_isValid = ::tele_rest::fromJsonValue(m_new_chat_photo, json[QString("new_chat_photo")]);
    m_new_chat_photo_isSet = !json[QString("new_chat_photo")].isNull() && m_new_chat_photo_isValid;

    m_delete_chat_photo_isValid = ::tele_rest::fromJsonValue(m_delete_chat_photo, json[QString("delete_chat_photo")]);
    m_delete_chat_photo_isSet = !json[QString("delete_chat_photo")].isNull() && m_delete_chat_photo_isValid;

    m_group_chat_created_isValid = ::tele_rest::fromJsonValue(m_group_chat_created, json[QString("group_chat_created")]);
    m_group_chat_created_isSet = !json[QString("group_chat_created")].isNull() && m_group_chat_created_isValid;

    m_supergroup_chat_created_isValid = ::tele_rest::fromJsonValue(m_supergroup_chat_created, json[QString("supergroup_chat_created")]);
    m_supergroup_chat_created_isSet = !json[QString("supergroup_chat_created")].isNull() && m_supergroup_chat_created_isValid;

    m_channel_chat_created_isValid = ::tele_rest::fromJsonValue(m_channel_chat_created, json[QString("channel_chat_created")]);
    m_channel_chat_created_isSet = !json[QString("channel_chat_created")].isNull() && m_channel_chat_created_isValid;

    m_message_auto_delete_timer_changed_isValid = ::tele_rest::fromJsonValue(m_message_auto_delete_timer_changed, json[QString("message_auto_delete_timer_changed")]);
    m_message_auto_delete_timer_changed_isSet = !json[QString("message_auto_delete_timer_changed")].isNull() && m_message_auto_delete_timer_changed_isValid;

    m_migrate_to_chat_id_isValid = ::tele_rest::fromJsonValue(m_migrate_to_chat_id, json[QString("migrate_to_chat_id")]);
    m_migrate_to_chat_id_isSet = !json[QString("migrate_to_chat_id")].isNull() && m_migrate_to_chat_id_isValid;

    m_migrate_from_chat_id_isValid = ::tele_rest::fromJsonValue(m_migrate_from_chat_id, json[QString("migrate_from_chat_id")]);
    m_migrate_from_chat_id_isSet = !json[QString("migrate_from_chat_id")].isNull() && m_migrate_from_chat_id_isValid;

    m_pinned_message_isValid = ::tele_rest::fromJsonValue(m_pinned_message, json[QString("pinned_message")]);
    m_pinned_message_isSet = !json[QString("pinned_message")].isNull() && m_pinned_message_isValid;

    m_invoice_isValid = ::tele_rest::fromJsonValue(m_invoice, json[QString("invoice")]);
    m_invoice_isSet = !json[QString("invoice")].isNull() && m_invoice_isValid;

    m_successful_payment_isValid = ::tele_rest::fromJsonValue(m_successful_payment, json[QString("successful_payment")]);
    m_successful_payment_isSet = !json[QString("successful_payment")].isNull() && m_successful_payment_isValid;

    m_refunded_payment_isValid = ::tele_rest::fromJsonValue(m_refunded_payment, json[QString("refunded_payment")]);
    m_refunded_payment_isSet = !json[QString("refunded_payment")].isNull() && m_refunded_payment_isValid;

    m_users_shared_isValid = ::tele_rest::fromJsonValue(m_users_shared, json[QString("users_shared")]);
    m_users_shared_isSet = !json[QString("users_shared")].isNull() && m_users_shared_isValid;

    m_chat_shared_isValid = ::tele_rest::fromJsonValue(m_chat_shared, json[QString("chat_shared")]);
    m_chat_shared_isSet = !json[QString("chat_shared")].isNull() && m_chat_shared_isValid;

    m_gift_isValid = ::tele_rest::fromJsonValue(m_gift, json[QString("gift")]);
    m_gift_isSet = !json[QString("gift")].isNull() && m_gift_isValid;

    m_unique_gift_isValid = ::tele_rest::fromJsonValue(m_unique_gift, json[QString("unique_gift")]);
    m_unique_gift_isSet = !json[QString("unique_gift")].isNull() && m_unique_gift_isValid;

    m_connected_website_isValid = ::tele_rest::fromJsonValue(m_connected_website, json[QString("connected_website")]);
    m_connected_website_isSet = !json[QString("connected_website")].isNull() && m_connected_website_isValid;

    m_write_access_allowed_isValid = ::tele_rest::fromJsonValue(m_write_access_allowed, json[QString("write_access_allowed")]);
    m_write_access_allowed_isSet = !json[QString("write_access_allowed")].isNull() && m_write_access_allowed_isValid;

    m_passport_data_isValid = ::tele_rest::fromJsonValue(m_passport_data, json[QString("passport_data")]);
    m_passport_data_isSet = !json[QString("passport_data")].isNull() && m_passport_data_isValid;

    m_proximity_alert_triggered_isValid = ::tele_rest::fromJsonValue(m_proximity_alert_triggered, json[QString("proximity_alert_triggered")]);
    m_proximity_alert_triggered_isSet = !json[QString("proximity_alert_triggered")].isNull() && m_proximity_alert_triggered_isValid;

    m_boost_added_isValid = ::tele_rest::fromJsonValue(m_boost_added, json[QString("boost_added")]);
    m_boost_added_isSet = !json[QString("boost_added")].isNull() && m_boost_added_isValid;

    m_chat_background_set_isValid = ::tele_rest::fromJsonValue(m_chat_background_set, json[QString("chat_background_set")]);
    m_chat_background_set_isSet = !json[QString("chat_background_set")].isNull() && m_chat_background_set_isValid;

    m_forum_topic_created_isValid = ::tele_rest::fromJsonValue(m_forum_topic_created, json[QString("forum_topic_created")]);
    m_forum_topic_created_isSet = !json[QString("forum_topic_created")].isNull() && m_forum_topic_created_isValid;

    m_forum_topic_edited_isValid = ::tele_rest::fromJsonValue(m_forum_topic_edited, json[QString("forum_topic_edited")]);
    m_forum_topic_edited_isSet = !json[QString("forum_topic_edited")].isNull() && m_forum_topic_edited_isValid;

    m_forum_topic_closed_isValid = ::tele_rest::fromJsonValue(m_forum_topic_closed, json[QString("forum_topic_closed")]);
    m_forum_topic_closed_isSet = !json[QString("forum_topic_closed")].isNull() && m_forum_topic_closed_isValid;

    m_forum_topic_reopened_isValid = ::tele_rest::fromJsonValue(m_forum_topic_reopened, json[QString("forum_topic_reopened")]);
    m_forum_topic_reopened_isSet = !json[QString("forum_topic_reopened")].isNull() && m_forum_topic_reopened_isValid;

    m_general_forum_topic_hidden_isValid = ::tele_rest::fromJsonValue(m_general_forum_topic_hidden, json[QString("general_forum_topic_hidden")]);
    m_general_forum_topic_hidden_isSet = !json[QString("general_forum_topic_hidden")].isNull() && m_general_forum_topic_hidden_isValid;

    m_general_forum_topic_unhidden_isValid = ::tele_rest::fromJsonValue(m_general_forum_topic_unhidden, json[QString("general_forum_topic_unhidden")]);
    m_general_forum_topic_unhidden_isSet = !json[QString("general_forum_topic_unhidden")].isNull() && m_general_forum_topic_unhidden_isValid;

    m_giveaway_created_isValid = ::tele_rest::fromJsonValue(m_giveaway_created, json[QString("giveaway_created")]);
    m_giveaway_created_isSet = !json[QString("giveaway_created")].isNull() && m_giveaway_created_isValid;

    m_giveaway_isValid = ::tele_rest::fromJsonValue(m_giveaway, json[QString("giveaway")]);
    m_giveaway_isSet = !json[QString("giveaway")].isNull() && m_giveaway_isValid;

    m_giveaway_winners_isValid = ::tele_rest::fromJsonValue(m_giveaway_winners, json[QString("giveaway_winners")]);
    m_giveaway_winners_isSet = !json[QString("giveaway_winners")].isNull() && m_giveaway_winners_isValid;

    m_giveaway_completed_isValid = ::tele_rest::fromJsonValue(m_giveaway_completed, json[QString("giveaway_completed")]);
    m_giveaway_completed_isSet = !json[QString("giveaway_completed")].isNull() && m_giveaway_completed_isValid;

    m_paid_message_price_changed_isValid = ::tele_rest::fromJsonValue(m_paid_message_price_changed, json[QString("paid_message_price_changed")]);
    m_paid_message_price_changed_isSet = !json[QString("paid_message_price_changed")].isNull() && m_paid_message_price_changed_isValid;

    m_video_chat_scheduled_isValid = ::tele_rest::fromJsonValue(m_video_chat_scheduled, json[QString("video_chat_scheduled")]);
    m_video_chat_scheduled_isSet = !json[QString("video_chat_scheduled")].isNull() && m_video_chat_scheduled_isValid;

    m_video_chat_started_isValid = ::tele_rest::fromJsonValue(m_video_chat_started, json[QString("video_chat_started")]);
    m_video_chat_started_isSet = !json[QString("video_chat_started")].isNull() && m_video_chat_started_isValid;

    m_video_chat_ended_isValid = ::tele_rest::fromJsonValue(m_video_chat_ended, json[QString("video_chat_ended")]);
    m_video_chat_ended_isSet = !json[QString("video_chat_ended")].isNull() && m_video_chat_ended_isValid;

    m_video_chat_participants_invited_isValid = ::tele_rest::fromJsonValue(m_video_chat_participants_invited, json[QString("video_chat_participants_invited")]);
    m_video_chat_participants_invited_isSet = !json[QString("video_chat_participants_invited")].isNull() && m_video_chat_participants_invited_isValid;

    m_web_app_data_isValid = ::tele_rest::fromJsonValue(m_web_app_data, json[QString("web_app_data")]);
    m_web_app_data_isSet = !json[QString("web_app_data")].isNull() && m_web_app_data_isValid;

    m_reply_markup_isValid = ::tele_rest::fromJsonValue(m_reply_markup, json[QString("reply_markup")]);
    m_reply_markup_isSet = !json[QString("reply_markup")].isNull() && m_reply_markup_isValid;
}

QString OAI_editMessageText_post_200_response_result::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_editMessageText_post_200_response_result::asJsonObject() const {
    QJsonObject obj;
    if (m_message_id_isSet) {
        obj.insert(QString("message_id"), ::tele_rest::toJsonValue(m_message_id));
    }
    if (m_date_isSet) {
        obj.insert(QString("date"), ::tele_rest::toJsonValue(m_date));
    }
    if (m_chat.isSet()) {
        obj.insert(QString("chat"), ::tele_rest::toJsonValue(m_chat));
    }
    if (m_message_thread_id_isSet) {
        obj.insert(QString("message_thread_id"), ::tele_rest::toJsonValue(m_message_thread_id));
    }
    if (m_from.isSet()) {
        obj.insert(QString("from"), ::tele_rest::toJsonValue(m_from));
    }
    if (m_sender_chat.isSet()) {
        obj.insert(QString("sender_chat"), ::tele_rest::toJsonValue(m_sender_chat));
    }
    if (m_sender_boost_count_isSet) {
        obj.insert(QString("sender_boost_count"), ::tele_rest::toJsonValue(m_sender_boost_count));
    }
    if (m_sender_business_bot.isSet()) {
        obj.insert(QString("sender_business_bot"), ::tele_rest::toJsonValue(m_sender_business_bot));
    }
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_forward_origin.isSet()) {
        obj.insert(QString("forward_origin"), ::tele_rest::toJsonValue(m_forward_origin));
    }
    if (m_is_topic_message_isSet) {
        obj.insert(QString("is_topic_message"), ::tele_rest::toJsonValue(m_is_topic_message));
    }
    if (m_is_automatic_forward_isSet) {
        obj.insert(QString("is_automatic_forward"), ::tele_rest::toJsonValue(m_is_automatic_forward));
    }
    if (m_reply_to_message.isSet()) {
        obj.insert(QString("reply_to_message"), ::tele_rest::toJsonValue(m_reply_to_message));
    }
    if (m_external_reply.isSet()) {
        obj.insert(QString("external_reply"), ::tele_rest::toJsonValue(m_external_reply));
    }
    if (m_quote.isSet()) {
        obj.insert(QString("quote"), ::tele_rest::toJsonValue(m_quote));
    }
    if (m_reply_to_story.isSet()) {
        obj.insert(QString("reply_to_story"), ::tele_rest::toJsonValue(m_reply_to_story));
    }
    if (m_via_bot.isSet()) {
        obj.insert(QString("via_bot"), ::tele_rest::toJsonValue(m_via_bot));
    }
    if (m_edit_date_isSet) {
        obj.insert(QString("edit_date"), ::tele_rest::toJsonValue(m_edit_date));
    }
    if (m_has_protected_content_isSet) {
        obj.insert(QString("has_protected_content"), ::tele_rest::toJsonValue(m_has_protected_content));
    }
    if (m_is_from_offline_isSet) {
        obj.insert(QString("is_from_offline"), ::tele_rest::toJsonValue(m_is_from_offline));
    }
    if (m_media_group_id_isSet) {
        obj.insert(QString("media_group_id"), ::tele_rest::toJsonValue(m_media_group_id));
    }
    if (m_author_signature_isSet) {
        obj.insert(QString("author_signature"), ::tele_rest::toJsonValue(m_author_signature));
    }
    if (m_paid_star_count_isSet) {
        obj.insert(QString("paid_star_count"), ::tele_rest::toJsonValue(m_paid_star_count));
    }
    if (m_text_isSet) {
        obj.insert(QString("text"), ::tele_rest::toJsonValue(m_text));
    }
    if (m_entities.size() > 0) {
        obj.insert(QString("entities"), ::tele_rest::toJsonValue(m_entities));
    }
    if (m_link_preview_options.isSet()) {
        obj.insert(QString("link_preview_options"), ::tele_rest::toJsonValue(m_link_preview_options));
    }
    if (m_effect_id_isSet) {
        obj.insert(QString("effect_id"), ::tele_rest::toJsonValue(m_effect_id));
    }
    if (m_animation.isSet()) {
        obj.insert(QString("animation"), ::tele_rest::toJsonValue(m_animation));
    }
    if (m_audio.isSet()) {
        obj.insert(QString("audio"), ::tele_rest::toJsonValue(m_audio));
    }
    if (m_document.isSet()) {
        obj.insert(QString("document"), ::tele_rest::toJsonValue(m_document));
    }
    if (m_paid_media.isSet()) {
        obj.insert(QString("paid_media"), ::tele_rest::toJsonValue(m_paid_media));
    }
    if (m_photo.size() > 0) {
        obj.insert(QString("photo"), ::tele_rest::toJsonValue(m_photo));
    }
    if (m_sticker.isSet()) {
        obj.insert(QString("sticker"), ::tele_rest::toJsonValue(m_sticker));
    }
    if (m_story.isSet()) {
        obj.insert(QString("story"), ::tele_rest::toJsonValue(m_story));
    }
    if (m_video.isSet()) {
        obj.insert(QString("video"), ::tele_rest::toJsonValue(m_video));
    }
    if (m_video_note.isSet()) {
        obj.insert(QString("video_note"), ::tele_rest::toJsonValue(m_video_note));
    }
    if (m_voice.isSet()) {
        obj.insert(QString("voice"), ::tele_rest::toJsonValue(m_voice));
    }
    if (m_caption_isSet) {
        obj.insert(QString("caption"), ::tele_rest::toJsonValue(m_caption));
    }
    if (m_caption_entities.size() > 0) {
        obj.insert(QString("caption_entities"), ::tele_rest::toJsonValue(m_caption_entities));
    }
    if (m_show_caption_above_media_isSet) {
        obj.insert(QString("show_caption_above_media"), ::tele_rest::toJsonValue(m_show_caption_above_media));
    }
    if (m_has_media_spoiler_isSet) {
        obj.insert(QString("has_media_spoiler"), ::tele_rest::toJsonValue(m_has_media_spoiler));
    }
    if (m_contact.isSet()) {
        obj.insert(QString("contact"), ::tele_rest::toJsonValue(m_contact));
    }
    if (m_dice.isSet()) {
        obj.insert(QString("dice"), ::tele_rest::toJsonValue(m_dice));
    }
    if (m_game.isSet()) {
        obj.insert(QString("game"), ::tele_rest::toJsonValue(m_game));
    }
    if (m_poll.isSet()) {
        obj.insert(QString("poll"), ::tele_rest::toJsonValue(m_poll));
    }
    if (m_venue.isSet()) {
        obj.insert(QString("venue"), ::tele_rest::toJsonValue(m_venue));
    }
    if (m_location.isSet()) {
        obj.insert(QString("location"), ::tele_rest::toJsonValue(m_location));
    }
    if (m_new_chat_members.size() > 0) {
        obj.insert(QString("new_chat_members"), ::tele_rest::toJsonValue(m_new_chat_members));
    }
    if (m_left_chat_member.isSet()) {
        obj.insert(QString("left_chat_member"), ::tele_rest::toJsonValue(m_left_chat_member));
    }
    if (m_new_chat_title_isSet) {
        obj.insert(QString("new_chat_title"), ::tele_rest::toJsonValue(m_new_chat_title));
    }
    if (m_new_chat_photo.size() > 0) {
        obj.insert(QString("new_chat_photo"), ::tele_rest::toJsonValue(m_new_chat_photo));
    }
    if (m_delete_chat_photo_isSet) {
        obj.insert(QString("delete_chat_photo"), ::tele_rest::toJsonValue(m_delete_chat_photo));
    }
    if (m_group_chat_created_isSet) {
        obj.insert(QString("group_chat_created"), ::tele_rest::toJsonValue(m_group_chat_created));
    }
    if (m_supergroup_chat_created_isSet) {
        obj.insert(QString("supergroup_chat_created"), ::tele_rest::toJsonValue(m_supergroup_chat_created));
    }
    if (m_channel_chat_created_isSet) {
        obj.insert(QString("channel_chat_created"), ::tele_rest::toJsonValue(m_channel_chat_created));
    }
    if (m_message_auto_delete_timer_changed.isSet()) {
        obj.insert(QString("message_auto_delete_timer_changed"), ::tele_rest::toJsonValue(m_message_auto_delete_timer_changed));
    }
    if (m_migrate_to_chat_id_isSet) {
        obj.insert(QString("migrate_to_chat_id"), ::tele_rest::toJsonValue(m_migrate_to_chat_id));
    }
    if (m_migrate_from_chat_id_isSet) {
        obj.insert(QString("migrate_from_chat_id"), ::tele_rest::toJsonValue(m_migrate_from_chat_id));
    }
    if (m_pinned_message.isSet()) {
        obj.insert(QString("pinned_message"), ::tele_rest::toJsonValue(m_pinned_message));
    }
    if (m_invoice.isSet()) {
        obj.insert(QString("invoice"), ::tele_rest::toJsonValue(m_invoice));
    }
    if (m_successful_payment.isSet()) {
        obj.insert(QString("successful_payment"), ::tele_rest::toJsonValue(m_successful_payment));
    }
    if (m_refunded_payment.isSet()) {
        obj.insert(QString("refunded_payment"), ::tele_rest::toJsonValue(m_refunded_payment));
    }
    if (m_users_shared.isSet()) {
        obj.insert(QString("users_shared"), ::tele_rest::toJsonValue(m_users_shared));
    }
    if (m_chat_shared.isSet()) {
        obj.insert(QString("chat_shared"), ::tele_rest::toJsonValue(m_chat_shared));
    }
    if (m_gift.isSet()) {
        obj.insert(QString("gift"), ::tele_rest::toJsonValue(m_gift));
    }
    if (m_unique_gift.isSet()) {
        obj.insert(QString("unique_gift"), ::tele_rest::toJsonValue(m_unique_gift));
    }
    if (m_connected_website_isSet) {
        obj.insert(QString("connected_website"), ::tele_rest::toJsonValue(m_connected_website));
    }
    if (m_write_access_allowed.isSet()) {
        obj.insert(QString("write_access_allowed"), ::tele_rest::toJsonValue(m_write_access_allowed));
    }
    if (m_passport_data.isSet()) {
        obj.insert(QString("passport_data"), ::tele_rest::toJsonValue(m_passport_data));
    }
    if (m_proximity_alert_triggered.isSet()) {
        obj.insert(QString("proximity_alert_triggered"), ::tele_rest::toJsonValue(m_proximity_alert_triggered));
    }
    if (m_boost_added.isSet()) {
        obj.insert(QString("boost_added"), ::tele_rest::toJsonValue(m_boost_added));
    }
    if (m_chat_background_set.isSet()) {
        obj.insert(QString("chat_background_set"), ::tele_rest::toJsonValue(m_chat_background_set));
    }
    if (m_forum_topic_created.isSet()) {
        obj.insert(QString("forum_topic_created"), ::tele_rest::toJsonValue(m_forum_topic_created));
    }
    if (m_forum_topic_edited.isSet()) {
        obj.insert(QString("forum_topic_edited"), ::tele_rest::toJsonValue(m_forum_topic_edited));
    }
    if (m_forum_topic_closed_isSet) {
        obj.insert(QString("forum_topic_closed"), ::tele_rest::toJsonValue(m_forum_topic_closed));
    }
    if (m_forum_topic_reopened_isSet) {
        obj.insert(QString("forum_topic_reopened"), ::tele_rest::toJsonValue(m_forum_topic_reopened));
    }
    if (m_general_forum_topic_hidden_isSet) {
        obj.insert(QString("general_forum_topic_hidden"), ::tele_rest::toJsonValue(m_general_forum_topic_hidden));
    }
    if (m_general_forum_topic_unhidden_isSet) {
        obj.insert(QString("general_forum_topic_unhidden"), ::tele_rest::toJsonValue(m_general_forum_topic_unhidden));
    }
    if (m_giveaway_created.isSet()) {
        obj.insert(QString("giveaway_created"), ::tele_rest::toJsonValue(m_giveaway_created));
    }
    if (m_giveaway.isSet()) {
        obj.insert(QString("giveaway"), ::tele_rest::toJsonValue(m_giveaway));
    }
    if (m_giveaway_winners.isSet()) {
        obj.insert(QString("giveaway_winners"), ::tele_rest::toJsonValue(m_giveaway_winners));
    }
    if (m_giveaway_completed.isSet()) {
        obj.insert(QString("giveaway_completed"), ::tele_rest::toJsonValue(m_giveaway_completed));
    }
    if (m_paid_message_price_changed.isSet()) {
        obj.insert(QString("paid_message_price_changed"), ::tele_rest::toJsonValue(m_paid_message_price_changed));
    }
    if (m_video_chat_scheduled.isSet()) {
        obj.insert(QString("video_chat_scheduled"), ::tele_rest::toJsonValue(m_video_chat_scheduled));
    }
    if (m_video_chat_started_isSet) {
        obj.insert(QString("video_chat_started"), ::tele_rest::toJsonValue(m_video_chat_started));
    }
    if (m_video_chat_ended.isSet()) {
        obj.insert(QString("video_chat_ended"), ::tele_rest::toJsonValue(m_video_chat_ended));
    }
    if (m_video_chat_participants_invited.isSet()) {
        obj.insert(QString("video_chat_participants_invited"), ::tele_rest::toJsonValue(m_video_chat_participants_invited));
    }
    if (m_web_app_data.isSet()) {
        obj.insert(QString("web_app_data"), ::tele_rest::toJsonValue(m_web_app_data));
    }
    if (m_reply_markup.isSet()) {
        obj.insert(QString("reply_markup"), ::tele_rest::toJsonValue(m_reply_markup));
    }
    return obj;
}

qint32 OAI_editMessageText_post_200_response_result::getMessageId() const {
    return m_message_id;
}
void OAI_editMessageText_post_200_response_result::setMessageId(const qint32 &message_id) {
    m_message_id = message_id;
    m_message_id_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_message_id_Set() const{
    return m_message_id_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_message_id_Valid() const{
    return m_message_id_isValid;
}

qint32 OAI_editMessageText_post_200_response_result::getDate() const {
    return m_date;
}
void OAI_editMessageText_post_200_response_result::setDate(const qint32 &date) {
    m_date = date;
    m_date_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_date_Set() const{
    return m_date_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_date_Valid() const{
    return m_date_isValid;
}

OAIChat OAI_editMessageText_post_200_response_result::getChat() const {
    return m_chat;
}
void OAI_editMessageText_post_200_response_result::setChat(const OAIChat &chat) {
    m_chat = chat;
    m_chat_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_chat_Set() const{
    return m_chat_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_chat_Valid() const{
    return m_chat_isValid;
}

qint32 OAI_editMessageText_post_200_response_result::getMessageThreadId() const {
    return m_message_thread_id;
}
void OAI_editMessageText_post_200_response_result::setMessageThreadId(const qint32 &message_thread_id) {
    m_message_thread_id = message_thread_id;
    m_message_thread_id_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_message_thread_id_Set() const{
    return m_message_thread_id_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_message_thread_id_Valid() const{
    return m_message_thread_id_isValid;
}

OAIUser OAI_editMessageText_post_200_response_result::getFrom() const {
    return m_from;
}
void OAI_editMessageText_post_200_response_result::setFrom(const OAIUser &from) {
    m_from = from;
    m_from_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_from_Set() const{
    return m_from_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_from_Valid() const{
    return m_from_isValid;
}

OAIChat OAI_editMessageText_post_200_response_result::getSenderChat() const {
    return m_sender_chat;
}
void OAI_editMessageText_post_200_response_result::setSenderChat(const OAIChat &sender_chat) {
    m_sender_chat = sender_chat;
    m_sender_chat_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_sender_chat_Set() const{
    return m_sender_chat_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_sender_chat_Valid() const{
    return m_sender_chat_isValid;
}

qint32 OAI_editMessageText_post_200_response_result::getSenderBoostCount() const {
    return m_sender_boost_count;
}
void OAI_editMessageText_post_200_response_result::setSenderBoostCount(const qint32 &sender_boost_count) {
    m_sender_boost_count = sender_boost_count;
    m_sender_boost_count_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_sender_boost_count_Set() const{
    return m_sender_boost_count_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_sender_boost_count_Valid() const{
    return m_sender_boost_count_isValid;
}

OAIUser OAI_editMessageText_post_200_response_result::getSenderBusinessBot() const {
    return m_sender_business_bot;
}
void OAI_editMessageText_post_200_response_result::setSenderBusinessBot(const OAIUser &sender_business_bot) {
    m_sender_business_bot = sender_business_bot;
    m_sender_business_bot_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_sender_business_bot_Set() const{
    return m_sender_business_bot_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_sender_business_bot_Valid() const{
    return m_sender_business_bot_isValid;
}

QString OAI_editMessageText_post_200_response_result::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAI_editMessageText_post_200_response_result::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

OAIMessageOrigin OAI_editMessageText_post_200_response_result::getForwardOrigin() const {
    return m_forward_origin;
}
void OAI_editMessageText_post_200_response_result::setForwardOrigin(const OAIMessageOrigin &forward_origin) {
    m_forward_origin = forward_origin;
    m_forward_origin_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_forward_origin_Set() const{
    return m_forward_origin_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_forward_origin_Valid() const{
    return m_forward_origin_isValid;
}

bool OAI_editMessageText_post_200_response_result::isIsTopicMessage() const {
    return m_is_topic_message;
}
void OAI_editMessageText_post_200_response_result::setIsTopicMessage(const bool &is_topic_message) {
    m_is_topic_message = is_topic_message;
    m_is_topic_message_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_is_topic_message_Set() const{
    return m_is_topic_message_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_is_topic_message_Valid() const{
    return m_is_topic_message_isValid;
}

bool OAI_editMessageText_post_200_response_result::isIsAutomaticForward() const {
    return m_is_automatic_forward;
}
void OAI_editMessageText_post_200_response_result::setIsAutomaticForward(const bool &is_automatic_forward) {
    m_is_automatic_forward = is_automatic_forward;
    m_is_automatic_forward_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_is_automatic_forward_Set() const{
    return m_is_automatic_forward_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_is_automatic_forward_Valid() const{
    return m_is_automatic_forward_isValid;
}

OAIMessage OAI_editMessageText_post_200_response_result::getReplyToMessage() const {
    return m_reply_to_message;
}
void OAI_editMessageText_post_200_response_result::setReplyToMessage(const OAIMessage &reply_to_message) {
    m_reply_to_message = reply_to_message;
    m_reply_to_message_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_reply_to_message_Set() const{
    return m_reply_to_message_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_reply_to_message_Valid() const{
    return m_reply_to_message_isValid;
}

OAIExternalReplyInfo OAI_editMessageText_post_200_response_result::getExternalReply() const {
    return m_external_reply;
}
void OAI_editMessageText_post_200_response_result::setExternalReply(const OAIExternalReplyInfo &external_reply) {
    m_external_reply = external_reply;
    m_external_reply_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_external_reply_Set() const{
    return m_external_reply_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_external_reply_Valid() const{
    return m_external_reply_isValid;
}

OAITextQuote OAI_editMessageText_post_200_response_result::getQuote() const {
    return m_quote;
}
void OAI_editMessageText_post_200_response_result::setQuote(const OAITextQuote &quote) {
    m_quote = quote;
    m_quote_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_quote_Set() const{
    return m_quote_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_quote_Valid() const{
    return m_quote_isValid;
}

OAIStory OAI_editMessageText_post_200_response_result::getReplyToStory() const {
    return m_reply_to_story;
}
void OAI_editMessageText_post_200_response_result::setReplyToStory(const OAIStory &reply_to_story) {
    m_reply_to_story = reply_to_story;
    m_reply_to_story_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_reply_to_story_Set() const{
    return m_reply_to_story_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_reply_to_story_Valid() const{
    return m_reply_to_story_isValid;
}

OAIUser OAI_editMessageText_post_200_response_result::getViaBot() const {
    return m_via_bot;
}
void OAI_editMessageText_post_200_response_result::setViaBot(const OAIUser &via_bot) {
    m_via_bot = via_bot;
    m_via_bot_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_via_bot_Set() const{
    return m_via_bot_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_via_bot_Valid() const{
    return m_via_bot_isValid;
}

qint32 OAI_editMessageText_post_200_response_result::getEditDate() const {
    return m_edit_date;
}
void OAI_editMessageText_post_200_response_result::setEditDate(const qint32 &edit_date) {
    m_edit_date = edit_date;
    m_edit_date_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_edit_date_Set() const{
    return m_edit_date_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_edit_date_Valid() const{
    return m_edit_date_isValid;
}

bool OAI_editMessageText_post_200_response_result::isHasProtectedContent() const {
    return m_has_protected_content;
}
void OAI_editMessageText_post_200_response_result::setHasProtectedContent(const bool &has_protected_content) {
    m_has_protected_content = has_protected_content;
    m_has_protected_content_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_has_protected_content_Set() const{
    return m_has_protected_content_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_has_protected_content_Valid() const{
    return m_has_protected_content_isValid;
}

bool OAI_editMessageText_post_200_response_result::isIsFromOffline() const {
    return m_is_from_offline;
}
void OAI_editMessageText_post_200_response_result::setIsFromOffline(const bool &is_from_offline) {
    m_is_from_offline = is_from_offline;
    m_is_from_offline_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_is_from_offline_Set() const{
    return m_is_from_offline_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_is_from_offline_Valid() const{
    return m_is_from_offline_isValid;
}

QString OAI_editMessageText_post_200_response_result::getMediaGroupId() const {
    return m_media_group_id;
}
void OAI_editMessageText_post_200_response_result::setMediaGroupId(const QString &media_group_id) {
    m_media_group_id = media_group_id;
    m_media_group_id_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_media_group_id_Set() const{
    return m_media_group_id_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_media_group_id_Valid() const{
    return m_media_group_id_isValid;
}

QString OAI_editMessageText_post_200_response_result::getAuthorSignature() const {
    return m_author_signature;
}
void OAI_editMessageText_post_200_response_result::setAuthorSignature(const QString &author_signature) {
    m_author_signature = author_signature;
    m_author_signature_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_author_signature_Set() const{
    return m_author_signature_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_author_signature_Valid() const{
    return m_author_signature_isValid;
}

qint32 OAI_editMessageText_post_200_response_result::getPaidStarCount() const {
    return m_paid_star_count;
}
void OAI_editMessageText_post_200_response_result::setPaidStarCount(const qint32 &paid_star_count) {
    m_paid_star_count = paid_star_count;
    m_paid_star_count_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_paid_star_count_Set() const{
    return m_paid_star_count_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_paid_star_count_Valid() const{
    return m_paid_star_count_isValid;
}

QString OAI_editMessageText_post_200_response_result::getText() const {
    return m_text;
}
void OAI_editMessageText_post_200_response_result::setText(const QString &text) {
    m_text = text;
    m_text_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_text_Set() const{
    return m_text_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_text_Valid() const{
    return m_text_isValid;
}

QList<OAIMessageEntity> OAI_editMessageText_post_200_response_result::getEntities() const {
    return m_entities;
}
void OAI_editMessageText_post_200_response_result::setEntities(const QList<OAIMessageEntity> &entities) {
    m_entities = entities;
    m_entities_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_entities_Set() const{
    return m_entities_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_entities_Valid() const{
    return m_entities_isValid;
}

OAILinkPreviewOptions OAI_editMessageText_post_200_response_result::getLinkPreviewOptions() const {
    return m_link_preview_options;
}
void OAI_editMessageText_post_200_response_result::setLinkPreviewOptions(const OAILinkPreviewOptions &link_preview_options) {
    m_link_preview_options = link_preview_options;
    m_link_preview_options_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_link_preview_options_Set() const{
    return m_link_preview_options_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_link_preview_options_Valid() const{
    return m_link_preview_options_isValid;
}

QString OAI_editMessageText_post_200_response_result::getEffectId() const {
    return m_effect_id;
}
void OAI_editMessageText_post_200_response_result::setEffectId(const QString &effect_id) {
    m_effect_id = effect_id;
    m_effect_id_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_effect_id_Set() const{
    return m_effect_id_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_effect_id_Valid() const{
    return m_effect_id_isValid;
}

OAIAnimation OAI_editMessageText_post_200_response_result::getAnimation() const {
    return m_animation;
}
void OAI_editMessageText_post_200_response_result::setAnimation(const OAIAnimation &animation) {
    m_animation = animation;
    m_animation_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_animation_Set() const{
    return m_animation_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_animation_Valid() const{
    return m_animation_isValid;
}

OAIAudio OAI_editMessageText_post_200_response_result::getAudio() const {
    return m_audio;
}
void OAI_editMessageText_post_200_response_result::setAudio(const OAIAudio &audio) {
    m_audio = audio;
    m_audio_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_audio_Set() const{
    return m_audio_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_audio_Valid() const{
    return m_audio_isValid;
}

OAIDocument OAI_editMessageText_post_200_response_result::getDocument() const {
    return m_document;
}
void OAI_editMessageText_post_200_response_result::setDocument(const OAIDocument &document) {
    m_document = document;
    m_document_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_document_Set() const{
    return m_document_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_document_Valid() const{
    return m_document_isValid;
}

OAIPaidMediaInfo OAI_editMessageText_post_200_response_result::getPaidMedia() const {
    return m_paid_media;
}
void OAI_editMessageText_post_200_response_result::setPaidMedia(const OAIPaidMediaInfo &paid_media) {
    m_paid_media = paid_media;
    m_paid_media_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_paid_media_Set() const{
    return m_paid_media_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_paid_media_Valid() const{
    return m_paid_media_isValid;
}

QList<OAIPhotoSize> OAI_editMessageText_post_200_response_result::getPhoto() const {
    return m_photo;
}
void OAI_editMessageText_post_200_response_result::setPhoto(const QList<OAIPhotoSize> &photo) {
    m_photo = photo;
    m_photo_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_photo_Set() const{
    return m_photo_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_photo_Valid() const{
    return m_photo_isValid;
}

OAISticker OAI_editMessageText_post_200_response_result::getSticker() const {
    return m_sticker;
}
void OAI_editMessageText_post_200_response_result::setSticker(const OAISticker &sticker) {
    m_sticker = sticker;
    m_sticker_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_sticker_Set() const{
    return m_sticker_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_sticker_Valid() const{
    return m_sticker_isValid;
}

OAIStory OAI_editMessageText_post_200_response_result::getStory() const {
    return m_story;
}
void OAI_editMessageText_post_200_response_result::setStory(const OAIStory &story) {
    m_story = story;
    m_story_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_story_Set() const{
    return m_story_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_story_Valid() const{
    return m_story_isValid;
}

OAIVideo OAI_editMessageText_post_200_response_result::getVideo() const {
    return m_video;
}
void OAI_editMessageText_post_200_response_result::setVideo(const OAIVideo &video) {
    m_video = video;
    m_video_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_video_Set() const{
    return m_video_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_video_Valid() const{
    return m_video_isValid;
}

OAIVideoNote OAI_editMessageText_post_200_response_result::getVideoNote() const {
    return m_video_note;
}
void OAI_editMessageText_post_200_response_result::setVideoNote(const OAIVideoNote &video_note) {
    m_video_note = video_note;
    m_video_note_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_video_note_Set() const{
    return m_video_note_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_video_note_Valid() const{
    return m_video_note_isValid;
}

OAIVoice OAI_editMessageText_post_200_response_result::getVoice() const {
    return m_voice;
}
void OAI_editMessageText_post_200_response_result::setVoice(const OAIVoice &voice) {
    m_voice = voice;
    m_voice_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_voice_Set() const{
    return m_voice_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_voice_Valid() const{
    return m_voice_isValid;
}

QString OAI_editMessageText_post_200_response_result::getCaption() const {
    return m_caption;
}
void OAI_editMessageText_post_200_response_result::setCaption(const QString &caption) {
    m_caption = caption;
    m_caption_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_caption_Set() const{
    return m_caption_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_caption_Valid() const{
    return m_caption_isValid;
}

QList<OAIMessageEntity> OAI_editMessageText_post_200_response_result::getCaptionEntities() const {
    return m_caption_entities;
}
void OAI_editMessageText_post_200_response_result::setCaptionEntities(const QList<OAIMessageEntity> &caption_entities) {
    m_caption_entities = caption_entities;
    m_caption_entities_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_caption_entities_Set() const{
    return m_caption_entities_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_caption_entities_Valid() const{
    return m_caption_entities_isValid;
}

bool OAI_editMessageText_post_200_response_result::isShowCaptionAboveMedia() const {
    return m_show_caption_above_media;
}
void OAI_editMessageText_post_200_response_result::setShowCaptionAboveMedia(const bool &show_caption_above_media) {
    m_show_caption_above_media = show_caption_above_media;
    m_show_caption_above_media_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_show_caption_above_media_Set() const{
    return m_show_caption_above_media_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_show_caption_above_media_Valid() const{
    return m_show_caption_above_media_isValid;
}

bool OAI_editMessageText_post_200_response_result::isHasMediaSpoiler() const {
    return m_has_media_spoiler;
}
void OAI_editMessageText_post_200_response_result::setHasMediaSpoiler(const bool &has_media_spoiler) {
    m_has_media_spoiler = has_media_spoiler;
    m_has_media_spoiler_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_has_media_spoiler_Set() const{
    return m_has_media_spoiler_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_has_media_spoiler_Valid() const{
    return m_has_media_spoiler_isValid;
}

OAIContact OAI_editMessageText_post_200_response_result::getContact() const {
    return m_contact;
}
void OAI_editMessageText_post_200_response_result::setContact(const OAIContact &contact) {
    m_contact = contact;
    m_contact_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_contact_Set() const{
    return m_contact_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_contact_Valid() const{
    return m_contact_isValid;
}

OAIDice OAI_editMessageText_post_200_response_result::getDice() const {
    return m_dice;
}
void OAI_editMessageText_post_200_response_result::setDice(const OAIDice &dice) {
    m_dice = dice;
    m_dice_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_dice_Set() const{
    return m_dice_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_dice_Valid() const{
    return m_dice_isValid;
}

OAIGame OAI_editMessageText_post_200_response_result::getGame() const {
    return m_game;
}
void OAI_editMessageText_post_200_response_result::setGame(const OAIGame &game) {
    m_game = game;
    m_game_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_game_Set() const{
    return m_game_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_game_Valid() const{
    return m_game_isValid;
}

OAIPoll OAI_editMessageText_post_200_response_result::getPoll() const {
    return m_poll;
}
void OAI_editMessageText_post_200_response_result::setPoll(const OAIPoll &poll) {
    m_poll = poll;
    m_poll_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_poll_Set() const{
    return m_poll_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_poll_Valid() const{
    return m_poll_isValid;
}

OAIVenue OAI_editMessageText_post_200_response_result::getVenue() const {
    return m_venue;
}
void OAI_editMessageText_post_200_response_result::setVenue(const OAIVenue &venue) {
    m_venue = venue;
    m_venue_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_venue_Set() const{
    return m_venue_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_venue_Valid() const{
    return m_venue_isValid;
}

OAILocation OAI_editMessageText_post_200_response_result::getLocation() const {
    return m_location;
}
void OAI_editMessageText_post_200_response_result::setLocation(const OAILocation &location) {
    m_location = location;
    m_location_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_location_Set() const{
    return m_location_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_location_Valid() const{
    return m_location_isValid;
}

QList<OAIUser> OAI_editMessageText_post_200_response_result::getNewChatMembers() const {
    return m_new_chat_members;
}
void OAI_editMessageText_post_200_response_result::setNewChatMembers(const QList<OAIUser> &new_chat_members) {
    m_new_chat_members = new_chat_members;
    m_new_chat_members_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_new_chat_members_Set() const{
    return m_new_chat_members_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_new_chat_members_Valid() const{
    return m_new_chat_members_isValid;
}

OAIUser OAI_editMessageText_post_200_response_result::getLeftChatMember() const {
    return m_left_chat_member;
}
void OAI_editMessageText_post_200_response_result::setLeftChatMember(const OAIUser &left_chat_member) {
    m_left_chat_member = left_chat_member;
    m_left_chat_member_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_left_chat_member_Set() const{
    return m_left_chat_member_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_left_chat_member_Valid() const{
    return m_left_chat_member_isValid;
}

QString OAI_editMessageText_post_200_response_result::getNewChatTitle() const {
    return m_new_chat_title;
}
void OAI_editMessageText_post_200_response_result::setNewChatTitle(const QString &new_chat_title) {
    m_new_chat_title = new_chat_title;
    m_new_chat_title_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_new_chat_title_Set() const{
    return m_new_chat_title_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_new_chat_title_Valid() const{
    return m_new_chat_title_isValid;
}

QList<OAIPhotoSize> OAI_editMessageText_post_200_response_result::getNewChatPhoto() const {
    return m_new_chat_photo;
}
void OAI_editMessageText_post_200_response_result::setNewChatPhoto(const QList<OAIPhotoSize> &new_chat_photo) {
    m_new_chat_photo = new_chat_photo;
    m_new_chat_photo_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_new_chat_photo_Set() const{
    return m_new_chat_photo_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_new_chat_photo_Valid() const{
    return m_new_chat_photo_isValid;
}

bool OAI_editMessageText_post_200_response_result::isDeleteChatPhoto() const {
    return m_delete_chat_photo;
}
void OAI_editMessageText_post_200_response_result::setDeleteChatPhoto(const bool &delete_chat_photo) {
    m_delete_chat_photo = delete_chat_photo;
    m_delete_chat_photo_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_delete_chat_photo_Set() const{
    return m_delete_chat_photo_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_delete_chat_photo_Valid() const{
    return m_delete_chat_photo_isValid;
}

bool OAI_editMessageText_post_200_response_result::isGroupChatCreated() const {
    return m_group_chat_created;
}
void OAI_editMessageText_post_200_response_result::setGroupChatCreated(const bool &group_chat_created) {
    m_group_chat_created = group_chat_created;
    m_group_chat_created_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_group_chat_created_Set() const{
    return m_group_chat_created_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_group_chat_created_Valid() const{
    return m_group_chat_created_isValid;
}

bool OAI_editMessageText_post_200_response_result::isSupergroupChatCreated() const {
    return m_supergroup_chat_created;
}
void OAI_editMessageText_post_200_response_result::setSupergroupChatCreated(const bool &supergroup_chat_created) {
    m_supergroup_chat_created = supergroup_chat_created;
    m_supergroup_chat_created_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_supergroup_chat_created_Set() const{
    return m_supergroup_chat_created_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_supergroup_chat_created_Valid() const{
    return m_supergroup_chat_created_isValid;
}

bool OAI_editMessageText_post_200_response_result::isChannelChatCreated() const {
    return m_channel_chat_created;
}
void OAI_editMessageText_post_200_response_result::setChannelChatCreated(const bool &channel_chat_created) {
    m_channel_chat_created = channel_chat_created;
    m_channel_chat_created_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_channel_chat_created_Set() const{
    return m_channel_chat_created_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_channel_chat_created_Valid() const{
    return m_channel_chat_created_isValid;
}

OAIMessageAutoDeleteTimerChanged OAI_editMessageText_post_200_response_result::getMessageAutoDeleteTimerChanged() const {
    return m_message_auto_delete_timer_changed;
}
void OAI_editMessageText_post_200_response_result::setMessageAutoDeleteTimerChanged(const OAIMessageAutoDeleteTimerChanged &message_auto_delete_timer_changed) {
    m_message_auto_delete_timer_changed = message_auto_delete_timer_changed;
    m_message_auto_delete_timer_changed_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_message_auto_delete_timer_changed_Set() const{
    return m_message_auto_delete_timer_changed_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_message_auto_delete_timer_changed_Valid() const{
    return m_message_auto_delete_timer_changed_isValid;
}

qint32 OAI_editMessageText_post_200_response_result::getMigrateToChatId() const {
    return m_migrate_to_chat_id;
}
void OAI_editMessageText_post_200_response_result::setMigrateToChatId(const qint32 &migrate_to_chat_id) {
    m_migrate_to_chat_id = migrate_to_chat_id;
    m_migrate_to_chat_id_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_migrate_to_chat_id_Set() const{
    return m_migrate_to_chat_id_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_migrate_to_chat_id_Valid() const{
    return m_migrate_to_chat_id_isValid;
}

qint32 OAI_editMessageText_post_200_response_result::getMigrateFromChatId() const {
    return m_migrate_from_chat_id;
}
void OAI_editMessageText_post_200_response_result::setMigrateFromChatId(const qint32 &migrate_from_chat_id) {
    m_migrate_from_chat_id = migrate_from_chat_id;
    m_migrate_from_chat_id_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_migrate_from_chat_id_Set() const{
    return m_migrate_from_chat_id_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_migrate_from_chat_id_Valid() const{
    return m_migrate_from_chat_id_isValid;
}

OAIMaybeInaccessibleMessage OAI_editMessageText_post_200_response_result::getPinnedMessage() const {
    return m_pinned_message;
}
void OAI_editMessageText_post_200_response_result::setPinnedMessage(const OAIMaybeInaccessibleMessage &pinned_message) {
    m_pinned_message = pinned_message;
    m_pinned_message_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_pinned_message_Set() const{
    return m_pinned_message_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_pinned_message_Valid() const{
    return m_pinned_message_isValid;
}

OAIInvoice OAI_editMessageText_post_200_response_result::getInvoice() const {
    return m_invoice;
}
void OAI_editMessageText_post_200_response_result::setInvoice(const OAIInvoice &invoice) {
    m_invoice = invoice;
    m_invoice_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_invoice_Set() const{
    return m_invoice_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_invoice_Valid() const{
    return m_invoice_isValid;
}

OAISuccessfulPayment OAI_editMessageText_post_200_response_result::getSuccessfulPayment() const {
    return m_successful_payment;
}
void OAI_editMessageText_post_200_response_result::setSuccessfulPayment(const OAISuccessfulPayment &successful_payment) {
    m_successful_payment = successful_payment;
    m_successful_payment_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_successful_payment_Set() const{
    return m_successful_payment_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_successful_payment_Valid() const{
    return m_successful_payment_isValid;
}

OAIRefundedPayment OAI_editMessageText_post_200_response_result::getRefundedPayment() const {
    return m_refunded_payment;
}
void OAI_editMessageText_post_200_response_result::setRefundedPayment(const OAIRefundedPayment &refunded_payment) {
    m_refunded_payment = refunded_payment;
    m_refunded_payment_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_refunded_payment_Set() const{
    return m_refunded_payment_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_refunded_payment_Valid() const{
    return m_refunded_payment_isValid;
}

OAIUsersShared OAI_editMessageText_post_200_response_result::getUsersShared() const {
    return m_users_shared;
}
void OAI_editMessageText_post_200_response_result::setUsersShared(const OAIUsersShared &users_shared) {
    m_users_shared = users_shared;
    m_users_shared_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_users_shared_Set() const{
    return m_users_shared_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_users_shared_Valid() const{
    return m_users_shared_isValid;
}

OAIChatShared OAI_editMessageText_post_200_response_result::getChatShared() const {
    return m_chat_shared;
}
void OAI_editMessageText_post_200_response_result::setChatShared(const OAIChatShared &chat_shared) {
    m_chat_shared = chat_shared;
    m_chat_shared_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_chat_shared_Set() const{
    return m_chat_shared_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_chat_shared_Valid() const{
    return m_chat_shared_isValid;
}

OAIGiftInfo OAI_editMessageText_post_200_response_result::getGift() const {
    return m_gift;
}
void OAI_editMessageText_post_200_response_result::setGift(const OAIGiftInfo &gift) {
    m_gift = gift;
    m_gift_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_gift_Set() const{
    return m_gift_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_gift_Valid() const{
    return m_gift_isValid;
}

OAIUniqueGiftInfo OAI_editMessageText_post_200_response_result::getUniqueGift() const {
    return m_unique_gift;
}
void OAI_editMessageText_post_200_response_result::setUniqueGift(const OAIUniqueGiftInfo &unique_gift) {
    m_unique_gift = unique_gift;
    m_unique_gift_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_unique_gift_Set() const{
    return m_unique_gift_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_unique_gift_Valid() const{
    return m_unique_gift_isValid;
}

QString OAI_editMessageText_post_200_response_result::getConnectedWebsite() const {
    return m_connected_website;
}
void OAI_editMessageText_post_200_response_result::setConnectedWebsite(const QString &connected_website) {
    m_connected_website = connected_website;
    m_connected_website_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_connected_website_Set() const{
    return m_connected_website_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_connected_website_Valid() const{
    return m_connected_website_isValid;
}

OAIWriteAccessAllowed OAI_editMessageText_post_200_response_result::getWriteAccessAllowed() const {
    return m_write_access_allowed;
}
void OAI_editMessageText_post_200_response_result::setWriteAccessAllowed(const OAIWriteAccessAllowed &write_access_allowed) {
    m_write_access_allowed = write_access_allowed;
    m_write_access_allowed_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_write_access_allowed_Set() const{
    return m_write_access_allowed_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_write_access_allowed_Valid() const{
    return m_write_access_allowed_isValid;
}

OAIPassportData OAI_editMessageText_post_200_response_result::getPassportData() const {
    return m_passport_data;
}
void OAI_editMessageText_post_200_response_result::setPassportData(const OAIPassportData &passport_data) {
    m_passport_data = passport_data;
    m_passport_data_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_passport_data_Set() const{
    return m_passport_data_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_passport_data_Valid() const{
    return m_passport_data_isValid;
}

OAIProximityAlertTriggered OAI_editMessageText_post_200_response_result::getProximityAlertTriggered() const {
    return m_proximity_alert_triggered;
}
void OAI_editMessageText_post_200_response_result::setProximityAlertTriggered(const OAIProximityAlertTriggered &proximity_alert_triggered) {
    m_proximity_alert_triggered = proximity_alert_triggered;
    m_proximity_alert_triggered_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_proximity_alert_triggered_Set() const{
    return m_proximity_alert_triggered_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_proximity_alert_triggered_Valid() const{
    return m_proximity_alert_triggered_isValid;
}

OAIChatBoostAdded OAI_editMessageText_post_200_response_result::getBoostAdded() const {
    return m_boost_added;
}
void OAI_editMessageText_post_200_response_result::setBoostAdded(const OAIChatBoostAdded &boost_added) {
    m_boost_added = boost_added;
    m_boost_added_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_boost_added_Set() const{
    return m_boost_added_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_boost_added_Valid() const{
    return m_boost_added_isValid;
}

OAIChatBackground OAI_editMessageText_post_200_response_result::getChatBackgroundSet() const {
    return m_chat_background_set;
}
void OAI_editMessageText_post_200_response_result::setChatBackgroundSet(const OAIChatBackground &chat_background_set) {
    m_chat_background_set = chat_background_set;
    m_chat_background_set_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_chat_background_set_Set() const{
    return m_chat_background_set_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_chat_background_set_Valid() const{
    return m_chat_background_set_isValid;
}

OAIForumTopicCreated OAI_editMessageText_post_200_response_result::getForumTopicCreated() const {
    return m_forum_topic_created;
}
void OAI_editMessageText_post_200_response_result::setForumTopicCreated(const OAIForumTopicCreated &forum_topic_created) {
    m_forum_topic_created = forum_topic_created;
    m_forum_topic_created_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_forum_topic_created_Set() const{
    return m_forum_topic_created_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_forum_topic_created_Valid() const{
    return m_forum_topic_created_isValid;
}

OAIForumTopicEdited OAI_editMessageText_post_200_response_result::getForumTopicEdited() const {
    return m_forum_topic_edited;
}
void OAI_editMessageText_post_200_response_result::setForumTopicEdited(const OAIForumTopicEdited &forum_topic_edited) {
    m_forum_topic_edited = forum_topic_edited;
    m_forum_topic_edited_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_forum_topic_edited_Set() const{
    return m_forum_topic_edited_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_forum_topic_edited_Valid() const{
    return m_forum_topic_edited_isValid;
}

QJsonValue OAI_editMessageText_post_200_response_result::getForumTopicClosed() const {
    return m_forum_topic_closed;
}
void OAI_editMessageText_post_200_response_result::setForumTopicClosed(const QJsonValue &forum_topic_closed) {
    m_forum_topic_closed = forum_topic_closed;
    m_forum_topic_closed_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_forum_topic_closed_Set() const{
    return m_forum_topic_closed_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_forum_topic_closed_Valid() const{
    return m_forum_topic_closed_isValid;
}

QJsonValue OAI_editMessageText_post_200_response_result::getForumTopicReopened() const {
    return m_forum_topic_reopened;
}
void OAI_editMessageText_post_200_response_result::setForumTopicReopened(const QJsonValue &forum_topic_reopened) {
    m_forum_topic_reopened = forum_topic_reopened;
    m_forum_topic_reopened_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_forum_topic_reopened_Set() const{
    return m_forum_topic_reopened_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_forum_topic_reopened_Valid() const{
    return m_forum_topic_reopened_isValid;
}

QJsonValue OAI_editMessageText_post_200_response_result::getGeneralForumTopicHidden() const {
    return m_general_forum_topic_hidden;
}
void OAI_editMessageText_post_200_response_result::setGeneralForumTopicHidden(const QJsonValue &general_forum_topic_hidden) {
    m_general_forum_topic_hidden = general_forum_topic_hidden;
    m_general_forum_topic_hidden_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_general_forum_topic_hidden_Set() const{
    return m_general_forum_topic_hidden_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_general_forum_topic_hidden_Valid() const{
    return m_general_forum_topic_hidden_isValid;
}

QJsonValue OAI_editMessageText_post_200_response_result::getGeneralForumTopicUnhidden() const {
    return m_general_forum_topic_unhidden;
}
void OAI_editMessageText_post_200_response_result::setGeneralForumTopicUnhidden(const QJsonValue &general_forum_topic_unhidden) {
    m_general_forum_topic_unhidden = general_forum_topic_unhidden;
    m_general_forum_topic_unhidden_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_general_forum_topic_unhidden_Set() const{
    return m_general_forum_topic_unhidden_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_general_forum_topic_unhidden_Valid() const{
    return m_general_forum_topic_unhidden_isValid;
}

OAIGiveawayCreated OAI_editMessageText_post_200_response_result::getGiveawayCreated() const {
    return m_giveaway_created;
}
void OAI_editMessageText_post_200_response_result::setGiveawayCreated(const OAIGiveawayCreated &giveaway_created) {
    m_giveaway_created = giveaway_created;
    m_giveaway_created_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_giveaway_created_Set() const{
    return m_giveaway_created_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_giveaway_created_Valid() const{
    return m_giveaway_created_isValid;
}

OAIGiveaway OAI_editMessageText_post_200_response_result::getGiveaway() const {
    return m_giveaway;
}
void OAI_editMessageText_post_200_response_result::setGiveaway(const OAIGiveaway &giveaway) {
    m_giveaway = giveaway;
    m_giveaway_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_giveaway_Set() const{
    return m_giveaway_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_giveaway_Valid() const{
    return m_giveaway_isValid;
}

OAIGiveawayWinners OAI_editMessageText_post_200_response_result::getGiveawayWinners() const {
    return m_giveaway_winners;
}
void OAI_editMessageText_post_200_response_result::setGiveawayWinners(const OAIGiveawayWinners &giveaway_winners) {
    m_giveaway_winners = giveaway_winners;
    m_giveaway_winners_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_giveaway_winners_Set() const{
    return m_giveaway_winners_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_giveaway_winners_Valid() const{
    return m_giveaway_winners_isValid;
}

OAIGiveawayCompleted OAI_editMessageText_post_200_response_result::getGiveawayCompleted() const {
    return m_giveaway_completed;
}
void OAI_editMessageText_post_200_response_result::setGiveawayCompleted(const OAIGiveawayCompleted &giveaway_completed) {
    m_giveaway_completed = giveaway_completed;
    m_giveaway_completed_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_giveaway_completed_Set() const{
    return m_giveaway_completed_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_giveaway_completed_Valid() const{
    return m_giveaway_completed_isValid;
}

OAIPaidMessagePriceChanged OAI_editMessageText_post_200_response_result::getPaidMessagePriceChanged() const {
    return m_paid_message_price_changed;
}
void OAI_editMessageText_post_200_response_result::setPaidMessagePriceChanged(const OAIPaidMessagePriceChanged &paid_message_price_changed) {
    m_paid_message_price_changed = paid_message_price_changed;
    m_paid_message_price_changed_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_paid_message_price_changed_Set() const{
    return m_paid_message_price_changed_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_paid_message_price_changed_Valid() const{
    return m_paid_message_price_changed_isValid;
}

OAIVideoChatScheduled OAI_editMessageText_post_200_response_result::getVideoChatScheduled() const {
    return m_video_chat_scheduled;
}
void OAI_editMessageText_post_200_response_result::setVideoChatScheduled(const OAIVideoChatScheduled &video_chat_scheduled) {
    m_video_chat_scheduled = video_chat_scheduled;
    m_video_chat_scheduled_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_video_chat_scheduled_Set() const{
    return m_video_chat_scheduled_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_video_chat_scheduled_Valid() const{
    return m_video_chat_scheduled_isValid;
}

QJsonValue OAI_editMessageText_post_200_response_result::getVideoChatStarted() const {
    return m_video_chat_started;
}
void OAI_editMessageText_post_200_response_result::setVideoChatStarted(const QJsonValue &video_chat_started) {
    m_video_chat_started = video_chat_started;
    m_video_chat_started_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_video_chat_started_Set() const{
    return m_video_chat_started_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_video_chat_started_Valid() const{
    return m_video_chat_started_isValid;
}

OAIVideoChatEnded OAI_editMessageText_post_200_response_result::getVideoChatEnded() const {
    return m_video_chat_ended;
}
void OAI_editMessageText_post_200_response_result::setVideoChatEnded(const OAIVideoChatEnded &video_chat_ended) {
    m_video_chat_ended = video_chat_ended;
    m_video_chat_ended_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_video_chat_ended_Set() const{
    return m_video_chat_ended_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_video_chat_ended_Valid() const{
    return m_video_chat_ended_isValid;
}

OAIVideoChatParticipantsInvited OAI_editMessageText_post_200_response_result::getVideoChatParticipantsInvited() const {
    return m_video_chat_participants_invited;
}
void OAI_editMessageText_post_200_response_result::setVideoChatParticipantsInvited(const OAIVideoChatParticipantsInvited &video_chat_participants_invited) {
    m_video_chat_participants_invited = video_chat_participants_invited;
    m_video_chat_participants_invited_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_video_chat_participants_invited_Set() const{
    return m_video_chat_participants_invited_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_video_chat_participants_invited_Valid() const{
    return m_video_chat_participants_invited_isValid;
}

OAIWebAppData OAI_editMessageText_post_200_response_result::getWebAppData() const {
    return m_web_app_data;
}
void OAI_editMessageText_post_200_response_result::setWebAppData(const OAIWebAppData &web_app_data) {
    m_web_app_data = web_app_data;
    m_web_app_data_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_web_app_data_Set() const{
    return m_web_app_data_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_web_app_data_Valid() const{
    return m_web_app_data_isValid;
}

OAIInlineKeyboardMarkup OAI_editMessageText_post_200_response_result::getReplyMarkup() const {
    return m_reply_markup;
}
void OAI_editMessageText_post_200_response_result::setReplyMarkup(const OAIInlineKeyboardMarkup &reply_markup) {
    m_reply_markup = reply_markup;
    m_reply_markup_isSet = true;
}

bool OAI_editMessageText_post_200_response_result::is_reply_markup_Set() const{
    return m_reply_markup_isSet;
}

bool OAI_editMessageText_post_200_response_result::is_reply_markup_Valid() const{
    return m_reply_markup_isValid;
}

bool OAI_editMessageText_post_200_response_result::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_message_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_thread_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_from.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_chat.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_boost_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_sender_business_bot.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_forward_origin.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_topic_message_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_automatic_forward_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_to_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_external_reply.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_quote.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_to_story.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_via_bot.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_edit_date_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_protected_content_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_from_offline_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_media_group_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_author_signature_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_star_count_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_link_preview_options.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_effect_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_animation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_audio.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_document.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_media.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_sticker.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_story.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_video.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_note.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_voice.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_caption_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_caption_entities.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_show_caption_above_media_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_has_media_spoiler_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_contact.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_dice.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_game.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_poll.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_venue.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_location.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_new_chat_members.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_left_chat_member.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_new_chat_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_new_chat_photo.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_delete_chat_photo_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_group_chat_created_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_supergroup_chat_created_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_channel_chat_created_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_message_auto_delete_timer_changed.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_migrate_to_chat_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_migrate_from_chat_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_pinned_message.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_invoice.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_successful_payment.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_refunded_payment.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_users_shared.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_shared.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_gift.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_unique_gift.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_connected_website_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_write_access_allowed.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_passport_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_proximity_alert_triggered.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_boost_added.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_chat_background_set.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_forum_topic_created.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_forum_topic_edited.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_forum_topic_closed_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_forum_topic_reopened_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_general_forum_topic_hidden_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_general_forum_topic_unhidden_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_giveaway_created.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_giveaway.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_giveaway_winners.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_giveaway_completed.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_paid_message_price_changed.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_chat_scheduled.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_chat_started_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_chat_ended.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_video_chat_participants_invited.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_web_app_data.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_reply_markup.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAI_editMessageText_post_200_response_result::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_message_id_isValid && m_date_isValid && m_chat_isValid && true;
}

} // namespace tele_rest
