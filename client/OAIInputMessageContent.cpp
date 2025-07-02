/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIInputMessageContent.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIInputMessageContent::OAIInputMessageContent(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIInputMessageContent::OAIInputMessageContent() {
    this->initializeModel();
}

OAIInputMessageContent::~OAIInputMessageContent() {}

void OAIInputMessageContent::initializeModel() {

    m_message_text_isSet = false;
    m_message_text_isValid = false;

    m_latitude_isSet = false;
    m_latitude_isValid = false;

    m_longitude_isSet = false;
    m_longitude_isValid = false;

    m_title_isSet = false;
    m_title_isValid = false;

    m_address_isSet = false;
    m_address_isValid = false;

    m_phone_number_isSet = false;
    m_phone_number_isValid = false;

    m_first_name_isSet = false;
    m_first_name_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_payload_isSet = false;
    m_payload_isValid = false;

    m_currency_isSet = false;
    m_currency_isValid = false;

    m_prices_isSet = false;
    m_prices_isValid = false;

    m_parse_mode_isSet = false;
    m_parse_mode_isValid = false;

    m_entities_isSet = false;
    m_entities_isValid = false;

    m_link_preview_options_isSet = false;
    m_link_preview_options_isValid = false;

    m_horizontal_accuracy_isSet = false;
    m_horizontal_accuracy_isValid = false;

    m_live_period_isSet = false;
    m_live_period_isValid = false;

    m_heading_isSet = false;
    m_heading_isValid = false;

    m_proximity_alert_radius_isSet = false;
    m_proximity_alert_radius_isValid = false;

    m_foursquare_id_isSet = false;
    m_foursquare_id_isValid = false;

    m_foursquare_type_isSet = false;
    m_foursquare_type_isValid = false;

    m_google_place_id_isSet = false;
    m_google_place_id_isValid = false;

    m_google_place_type_isSet = false;
    m_google_place_type_isValid = false;

    m_last_name_isSet = false;
    m_last_name_isValid = false;

    m_vcard_isSet = false;
    m_vcard_isValid = false;

    m_provider_token_isSet = false;
    m_provider_token_isValid = false;

    m_max_tip_amount_isSet = false;
    m_max_tip_amount_isValid = false;

    m_suggested_tip_amounts_isSet = false;
    m_suggested_tip_amounts_isValid = false;

    m_provider_data_isSet = false;
    m_provider_data_isValid = false;

    m_photo_url_isSet = false;
    m_photo_url_isValid = false;

    m_photo_size_isSet = false;
    m_photo_size_isValid = false;

    m_photo_width_isSet = false;
    m_photo_width_isValid = false;

    m_photo_height_isSet = false;
    m_photo_height_isValid = false;

    m_need_name_isSet = false;
    m_need_name_isValid = false;

    m_need_phone_number_isSet = false;
    m_need_phone_number_isValid = false;

    m_need_email_isSet = false;
    m_need_email_isValid = false;

    m_need_shipping_address_isSet = false;
    m_need_shipping_address_isValid = false;

    m_send_phone_number_to_provider_isSet = false;
    m_send_phone_number_to_provider_isValid = false;

    m_send_email_to_provider_isSet = false;
    m_send_email_to_provider_isValid = false;

    m_is_flexible_isSet = false;
    m_is_flexible_isValid = false;
}

void OAIInputMessageContent::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIInputMessageContent::fromJsonObject(QJsonObject json) {

    m_message_text_isValid = ::tele_rest::fromJsonValue(m_message_text, json[QString("message_text")]);
    m_message_text_isSet = !json[QString("message_text")].isNull() && m_message_text_isValid;

    m_latitude_isValid = ::tele_rest::fromJsonValue(m_latitude, json[QString("latitude")]);
    m_latitude_isSet = !json[QString("latitude")].isNull() && m_latitude_isValid;

    m_longitude_isValid = ::tele_rest::fromJsonValue(m_longitude, json[QString("longitude")]);
    m_longitude_isSet = !json[QString("longitude")].isNull() && m_longitude_isValid;

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_address_isValid = ::tele_rest::fromJsonValue(m_address, json[QString("address")]);
    m_address_isSet = !json[QString("address")].isNull() && m_address_isValid;

    m_phone_number_isValid = ::tele_rest::fromJsonValue(m_phone_number, json[QString("phone_number")]);
    m_phone_number_isSet = !json[QString("phone_number")].isNull() && m_phone_number_isValid;

    m_first_name_isValid = ::tele_rest::fromJsonValue(m_first_name, json[QString("first_name")]);
    m_first_name_isSet = !json[QString("first_name")].isNull() && m_first_name_isValid;

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_payload_isValid = ::tele_rest::fromJsonValue(m_payload, json[QString("payload")]);
    m_payload_isSet = !json[QString("payload")].isNull() && m_payload_isValid;

    m_currency_isValid = ::tele_rest::fromJsonValue(m_currency, json[QString("currency")]);
    m_currency_isSet = !json[QString("currency")].isNull() && m_currency_isValid;

    m_prices_isValid = ::tele_rest::fromJsonValue(m_prices, json[QString("prices")]);
    m_prices_isSet = !json[QString("prices")].isNull() && m_prices_isValid;

    m_parse_mode_isValid = ::tele_rest::fromJsonValue(m_parse_mode, json[QString("parse_mode")]);
    m_parse_mode_isSet = !json[QString("parse_mode")].isNull() && m_parse_mode_isValid;

    m_entities_isValid = ::tele_rest::fromJsonValue(m_entities, json[QString("entities")]);
    m_entities_isSet = !json[QString("entities")].isNull() && m_entities_isValid;

    m_link_preview_options_isValid = ::tele_rest::fromJsonValue(m_link_preview_options, json[QString("link_preview_options")]);
    m_link_preview_options_isSet = !json[QString("link_preview_options")].isNull() && m_link_preview_options_isValid;

    m_horizontal_accuracy_isValid = ::tele_rest::fromJsonValue(m_horizontal_accuracy, json[QString("horizontal_accuracy")]);
    m_horizontal_accuracy_isSet = !json[QString("horizontal_accuracy")].isNull() && m_horizontal_accuracy_isValid;

    m_live_period_isValid = ::tele_rest::fromJsonValue(m_live_period, json[QString("live_period")]);
    m_live_period_isSet = !json[QString("live_period")].isNull() && m_live_period_isValid;

    m_heading_isValid = ::tele_rest::fromJsonValue(m_heading, json[QString("heading")]);
    m_heading_isSet = !json[QString("heading")].isNull() && m_heading_isValid;

    m_proximity_alert_radius_isValid = ::tele_rest::fromJsonValue(m_proximity_alert_radius, json[QString("proximity_alert_radius")]);
    m_proximity_alert_radius_isSet = !json[QString("proximity_alert_radius")].isNull() && m_proximity_alert_radius_isValid;

    m_foursquare_id_isValid = ::tele_rest::fromJsonValue(m_foursquare_id, json[QString("foursquare_id")]);
    m_foursquare_id_isSet = !json[QString("foursquare_id")].isNull() && m_foursquare_id_isValid;

    m_foursquare_type_isValid = ::tele_rest::fromJsonValue(m_foursquare_type, json[QString("foursquare_type")]);
    m_foursquare_type_isSet = !json[QString("foursquare_type")].isNull() && m_foursquare_type_isValid;

    m_google_place_id_isValid = ::tele_rest::fromJsonValue(m_google_place_id, json[QString("google_place_id")]);
    m_google_place_id_isSet = !json[QString("google_place_id")].isNull() && m_google_place_id_isValid;

    m_google_place_type_isValid = ::tele_rest::fromJsonValue(m_google_place_type, json[QString("google_place_type")]);
    m_google_place_type_isSet = !json[QString("google_place_type")].isNull() && m_google_place_type_isValid;

    m_last_name_isValid = ::tele_rest::fromJsonValue(m_last_name, json[QString("last_name")]);
    m_last_name_isSet = !json[QString("last_name")].isNull() && m_last_name_isValid;

    m_vcard_isValid = ::tele_rest::fromJsonValue(m_vcard, json[QString("vcard")]);
    m_vcard_isSet = !json[QString("vcard")].isNull() && m_vcard_isValid;

    m_provider_token_isValid = ::tele_rest::fromJsonValue(m_provider_token, json[QString("provider_token")]);
    m_provider_token_isSet = !json[QString("provider_token")].isNull() && m_provider_token_isValid;

    m_max_tip_amount_isValid = ::tele_rest::fromJsonValue(m_max_tip_amount, json[QString("max_tip_amount")]);
    m_max_tip_amount_isSet = !json[QString("max_tip_amount")].isNull() && m_max_tip_amount_isValid;

    m_suggested_tip_amounts_isValid = ::tele_rest::fromJsonValue(m_suggested_tip_amounts, json[QString("suggested_tip_amounts")]);
    m_suggested_tip_amounts_isSet = !json[QString("suggested_tip_amounts")].isNull() && m_suggested_tip_amounts_isValid;

    m_provider_data_isValid = ::tele_rest::fromJsonValue(m_provider_data, json[QString("provider_data")]);
    m_provider_data_isSet = !json[QString("provider_data")].isNull() && m_provider_data_isValid;

    m_photo_url_isValid = ::tele_rest::fromJsonValue(m_photo_url, json[QString("photo_url")]);
    m_photo_url_isSet = !json[QString("photo_url")].isNull() && m_photo_url_isValid;

    m_photo_size_isValid = ::tele_rest::fromJsonValue(m_photo_size, json[QString("photo_size")]);
    m_photo_size_isSet = !json[QString("photo_size")].isNull() && m_photo_size_isValid;

    m_photo_width_isValid = ::tele_rest::fromJsonValue(m_photo_width, json[QString("photo_width")]);
    m_photo_width_isSet = !json[QString("photo_width")].isNull() && m_photo_width_isValid;

    m_photo_height_isValid = ::tele_rest::fromJsonValue(m_photo_height, json[QString("photo_height")]);
    m_photo_height_isSet = !json[QString("photo_height")].isNull() && m_photo_height_isValid;

    m_need_name_isValid = ::tele_rest::fromJsonValue(m_need_name, json[QString("need_name")]);
    m_need_name_isSet = !json[QString("need_name")].isNull() && m_need_name_isValid;

    m_need_phone_number_isValid = ::tele_rest::fromJsonValue(m_need_phone_number, json[QString("need_phone_number")]);
    m_need_phone_number_isSet = !json[QString("need_phone_number")].isNull() && m_need_phone_number_isValid;

    m_need_email_isValid = ::tele_rest::fromJsonValue(m_need_email, json[QString("need_email")]);
    m_need_email_isSet = !json[QString("need_email")].isNull() && m_need_email_isValid;

    m_need_shipping_address_isValid = ::tele_rest::fromJsonValue(m_need_shipping_address, json[QString("need_shipping_address")]);
    m_need_shipping_address_isSet = !json[QString("need_shipping_address")].isNull() && m_need_shipping_address_isValid;

    m_send_phone_number_to_provider_isValid = ::tele_rest::fromJsonValue(m_send_phone_number_to_provider, json[QString("send_phone_number_to_provider")]);
    m_send_phone_number_to_provider_isSet = !json[QString("send_phone_number_to_provider")].isNull() && m_send_phone_number_to_provider_isValid;

    m_send_email_to_provider_isValid = ::tele_rest::fromJsonValue(m_send_email_to_provider, json[QString("send_email_to_provider")]);
    m_send_email_to_provider_isSet = !json[QString("send_email_to_provider")].isNull() && m_send_email_to_provider_isValid;

    m_is_flexible_isValid = ::tele_rest::fromJsonValue(m_is_flexible, json[QString("is_flexible")]);
    m_is_flexible_isSet = !json[QString("is_flexible")].isNull() && m_is_flexible_isValid;
}

QString OAIInputMessageContent::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIInputMessageContent::asJsonObject() const {
    QJsonObject obj;
    if (m_message_text_isSet) {
        obj.insert(QString("message_text"), ::tele_rest::toJsonValue(m_message_text));
    }
    if (m_latitude_isSet) {
        obj.insert(QString("latitude"), ::tele_rest::toJsonValue(m_latitude));
    }
    if (m_longitude_isSet) {
        obj.insert(QString("longitude"), ::tele_rest::toJsonValue(m_longitude));
    }
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
    }
    if (m_address_isSet) {
        obj.insert(QString("address"), ::tele_rest::toJsonValue(m_address));
    }
    if (m_phone_number_isSet) {
        obj.insert(QString("phone_number"), ::tele_rest::toJsonValue(m_phone_number));
    }
    if (m_first_name_isSet) {
        obj.insert(QString("first_name"), ::tele_rest::toJsonValue(m_first_name));
    }
    if (m_description_isSet) {
        obj.insert(QString("description"), ::tele_rest::toJsonValue(m_description));
    }
    if (m_payload_isSet) {
        obj.insert(QString("payload"), ::tele_rest::toJsonValue(m_payload));
    }
    if (m_currency_isSet) {
        obj.insert(QString("currency"), ::tele_rest::toJsonValue(m_currency));
    }
    if (m_prices.size() > 0) {
        obj.insert(QString("prices"), ::tele_rest::toJsonValue(m_prices));
    }
    if (m_parse_mode_isSet) {
        obj.insert(QString("parse_mode"), ::tele_rest::toJsonValue(m_parse_mode));
    }
    if (m_entities.size() > 0) {
        obj.insert(QString("entities"), ::tele_rest::toJsonValue(m_entities));
    }
    if (m_link_preview_options.isSet()) {
        obj.insert(QString("link_preview_options"), ::tele_rest::toJsonValue(m_link_preview_options));
    }
    if (m_horizontal_accuracy_isSet) {
        obj.insert(QString("horizontal_accuracy"), ::tele_rest::toJsonValue(m_horizontal_accuracy));
    }
    if (m_live_period_isSet) {
        obj.insert(QString("live_period"), ::tele_rest::toJsonValue(m_live_period));
    }
    if (m_heading_isSet) {
        obj.insert(QString("heading"), ::tele_rest::toJsonValue(m_heading));
    }
    if (m_proximity_alert_radius_isSet) {
        obj.insert(QString("proximity_alert_radius"), ::tele_rest::toJsonValue(m_proximity_alert_radius));
    }
    if (m_foursquare_id_isSet) {
        obj.insert(QString("foursquare_id"), ::tele_rest::toJsonValue(m_foursquare_id));
    }
    if (m_foursquare_type_isSet) {
        obj.insert(QString("foursquare_type"), ::tele_rest::toJsonValue(m_foursquare_type));
    }
    if (m_google_place_id_isSet) {
        obj.insert(QString("google_place_id"), ::tele_rest::toJsonValue(m_google_place_id));
    }
    if (m_google_place_type_isSet) {
        obj.insert(QString("google_place_type"), ::tele_rest::toJsonValue(m_google_place_type));
    }
    if (m_last_name_isSet) {
        obj.insert(QString("last_name"), ::tele_rest::toJsonValue(m_last_name));
    }
    if (m_vcard_isSet) {
        obj.insert(QString("vcard"), ::tele_rest::toJsonValue(m_vcard));
    }
    if (m_provider_token_isSet) {
        obj.insert(QString("provider_token"), ::tele_rest::toJsonValue(m_provider_token));
    }
    if (m_max_tip_amount_isSet) {
        obj.insert(QString("max_tip_amount"), ::tele_rest::toJsonValue(m_max_tip_amount));
    }
    if (m_suggested_tip_amounts.size() > 0) {
        obj.insert(QString("suggested_tip_amounts"), ::tele_rest::toJsonValue(m_suggested_tip_amounts));
    }
    if (m_provider_data_isSet) {
        obj.insert(QString("provider_data"), ::tele_rest::toJsonValue(m_provider_data));
    }
    if (m_photo_url_isSet) {
        obj.insert(QString("photo_url"), ::tele_rest::toJsonValue(m_photo_url));
    }
    if (m_photo_size_isSet) {
        obj.insert(QString("photo_size"), ::tele_rest::toJsonValue(m_photo_size));
    }
    if (m_photo_width_isSet) {
        obj.insert(QString("photo_width"), ::tele_rest::toJsonValue(m_photo_width));
    }
    if (m_photo_height_isSet) {
        obj.insert(QString("photo_height"), ::tele_rest::toJsonValue(m_photo_height));
    }
    if (m_need_name_isSet) {
        obj.insert(QString("need_name"), ::tele_rest::toJsonValue(m_need_name));
    }
    if (m_need_phone_number_isSet) {
        obj.insert(QString("need_phone_number"), ::tele_rest::toJsonValue(m_need_phone_number));
    }
    if (m_need_email_isSet) {
        obj.insert(QString("need_email"), ::tele_rest::toJsonValue(m_need_email));
    }
    if (m_need_shipping_address_isSet) {
        obj.insert(QString("need_shipping_address"), ::tele_rest::toJsonValue(m_need_shipping_address));
    }
    if (m_send_phone_number_to_provider_isSet) {
        obj.insert(QString("send_phone_number_to_provider"), ::tele_rest::toJsonValue(m_send_phone_number_to_provider));
    }
    if (m_send_email_to_provider_isSet) {
        obj.insert(QString("send_email_to_provider"), ::tele_rest::toJsonValue(m_send_email_to_provider));
    }
    if (m_is_flexible_isSet) {
        obj.insert(QString("is_flexible"), ::tele_rest::toJsonValue(m_is_flexible));
    }
    return obj;
}

QString OAIInputMessageContent::getMessageText() const {
    return m_message_text;
}
void OAIInputMessageContent::setMessageText(const QString &message_text) {
    m_message_text = message_text;
    m_message_text_isSet = true;
}

bool OAIInputMessageContent::is_message_text_Set() const{
    return m_message_text_isSet;
}

bool OAIInputMessageContent::is_message_text_Valid() const{
    return m_message_text_isValid;
}

double OAIInputMessageContent::getLatitude() const {
    return m_latitude;
}
void OAIInputMessageContent::setLatitude(const double &latitude) {
    m_latitude = latitude;
    m_latitude_isSet = true;
}

bool OAIInputMessageContent::is_latitude_Set() const{
    return m_latitude_isSet;
}

bool OAIInputMessageContent::is_latitude_Valid() const{
    return m_latitude_isValid;
}

double OAIInputMessageContent::getLongitude() const {
    return m_longitude;
}
void OAIInputMessageContent::setLongitude(const double &longitude) {
    m_longitude = longitude;
    m_longitude_isSet = true;
}

bool OAIInputMessageContent::is_longitude_Set() const{
    return m_longitude_isSet;
}

bool OAIInputMessageContent::is_longitude_Valid() const{
    return m_longitude_isValid;
}

QString OAIInputMessageContent::getTitle() const {
    return m_title;
}
void OAIInputMessageContent::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAIInputMessageContent::is_title_Set() const{
    return m_title_isSet;
}

bool OAIInputMessageContent::is_title_Valid() const{
    return m_title_isValid;
}

QString OAIInputMessageContent::getAddress() const {
    return m_address;
}
void OAIInputMessageContent::setAddress(const QString &address) {
    m_address = address;
    m_address_isSet = true;
}

bool OAIInputMessageContent::is_address_Set() const{
    return m_address_isSet;
}

bool OAIInputMessageContent::is_address_Valid() const{
    return m_address_isValid;
}

QString OAIInputMessageContent::getPhoneNumber() const {
    return m_phone_number;
}
void OAIInputMessageContent::setPhoneNumber(const QString &phone_number) {
    m_phone_number = phone_number;
    m_phone_number_isSet = true;
}

bool OAIInputMessageContent::is_phone_number_Set() const{
    return m_phone_number_isSet;
}

bool OAIInputMessageContent::is_phone_number_Valid() const{
    return m_phone_number_isValid;
}

QString OAIInputMessageContent::getFirstName() const {
    return m_first_name;
}
void OAIInputMessageContent::setFirstName(const QString &first_name) {
    m_first_name = first_name;
    m_first_name_isSet = true;
}

bool OAIInputMessageContent::is_first_name_Set() const{
    return m_first_name_isSet;
}

bool OAIInputMessageContent::is_first_name_Valid() const{
    return m_first_name_isValid;
}

QString OAIInputMessageContent::getDescription() const {
    return m_description;
}
void OAIInputMessageContent::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAIInputMessageContent::is_description_Set() const{
    return m_description_isSet;
}

bool OAIInputMessageContent::is_description_Valid() const{
    return m_description_isValid;
}

QString OAIInputMessageContent::getPayload() const {
    return m_payload;
}
void OAIInputMessageContent::setPayload(const QString &payload) {
    m_payload = payload;
    m_payload_isSet = true;
}

bool OAIInputMessageContent::is_payload_Set() const{
    return m_payload_isSet;
}

bool OAIInputMessageContent::is_payload_Valid() const{
    return m_payload_isValid;
}

QString OAIInputMessageContent::getCurrency() const {
    return m_currency;
}
void OAIInputMessageContent::setCurrency(const QString &currency) {
    m_currency = currency;
    m_currency_isSet = true;
}

bool OAIInputMessageContent::is_currency_Set() const{
    return m_currency_isSet;
}

bool OAIInputMessageContent::is_currency_Valid() const{
    return m_currency_isValid;
}

QList<OAILabeledPrice> OAIInputMessageContent::getPrices() const {
    return m_prices;
}
void OAIInputMessageContent::setPrices(const QList<OAILabeledPrice> &prices) {
    m_prices = prices;
    m_prices_isSet = true;
}

bool OAIInputMessageContent::is_prices_Set() const{
    return m_prices_isSet;
}

bool OAIInputMessageContent::is_prices_Valid() const{
    return m_prices_isValid;
}

QString OAIInputMessageContent::getParseMode() const {
    return m_parse_mode;
}
void OAIInputMessageContent::setParseMode(const QString &parse_mode) {
    m_parse_mode = parse_mode;
    m_parse_mode_isSet = true;
}

bool OAIInputMessageContent::is_parse_mode_Set() const{
    return m_parse_mode_isSet;
}

bool OAIInputMessageContent::is_parse_mode_Valid() const{
    return m_parse_mode_isValid;
}

QList<OAIMessageEntity> OAIInputMessageContent::getEntities() const {
    return m_entities;
}
void OAIInputMessageContent::setEntities(const QList<OAIMessageEntity> &entities) {
    m_entities = entities;
    m_entities_isSet = true;
}

bool OAIInputMessageContent::is_entities_Set() const{
    return m_entities_isSet;
}

bool OAIInputMessageContent::is_entities_Valid() const{
    return m_entities_isValid;
}

OAILinkPreviewOptions OAIInputMessageContent::getLinkPreviewOptions() const {
    return m_link_preview_options;
}
void OAIInputMessageContent::setLinkPreviewOptions(const OAILinkPreviewOptions &link_preview_options) {
    m_link_preview_options = link_preview_options;
    m_link_preview_options_isSet = true;
}

bool OAIInputMessageContent::is_link_preview_options_Set() const{
    return m_link_preview_options_isSet;
}

bool OAIInputMessageContent::is_link_preview_options_Valid() const{
    return m_link_preview_options_isValid;
}

double OAIInputMessageContent::getHorizontalAccuracy() const {
    return m_horizontal_accuracy;
}
void OAIInputMessageContent::setHorizontalAccuracy(const double &horizontal_accuracy) {
    m_horizontal_accuracy = horizontal_accuracy;
    m_horizontal_accuracy_isSet = true;
}

bool OAIInputMessageContent::is_horizontal_accuracy_Set() const{
    return m_horizontal_accuracy_isSet;
}

bool OAIInputMessageContent::is_horizontal_accuracy_Valid() const{
    return m_horizontal_accuracy_isValid;
}

qint32 OAIInputMessageContent::getLivePeriod() const {
    return m_live_period;
}
void OAIInputMessageContent::setLivePeriod(const qint32 &live_period) {
    m_live_period = live_period;
    m_live_period_isSet = true;
}

bool OAIInputMessageContent::is_live_period_Set() const{
    return m_live_period_isSet;
}

bool OAIInputMessageContent::is_live_period_Valid() const{
    return m_live_period_isValid;
}

qint32 OAIInputMessageContent::getHeading() const {
    return m_heading;
}
void OAIInputMessageContent::setHeading(const qint32 &heading) {
    m_heading = heading;
    m_heading_isSet = true;
}

bool OAIInputMessageContent::is_heading_Set() const{
    return m_heading_isSet;
}

bool OAIInputMessageContent::is_heading_Valid() const{
    return m_heading_isValid;
}

qint32 OAIInputMessageContent::getProximityAlertRadius() const {
    return m_proximity_alert_radius;
}
void OAIInputMessageContent::setProximityAlertRadius(const qint32 &proximity_alert_radius) {
    m_proximity_alert_radius = proximity_alert_radius;
    m_proximity_alert_radius_isSet = true;
}

bool OAIInputMessageContent::is_proximity_alert_radius_Set() const{
    return m_proximity_alert_radius_isSet;
}

bool OAIInputMessageContent::is_proximity_alert_radius_Valid() const{
    return m_proximity_alert_radius_isValid;
}

QString OAIInputMessageContent::getFoursquareId() const {
    return m_foursquare_id;
}
void OAIInputMessageContent::setFoursquareId(const QString &foursquare_id) {
    m_foursquare_id = foursquare_id;
    m_foursquare_id_isSet = true;
}

bool OAIInputMessageContent::is_foursquare_id_Set() const{
    return m_foursquare_id_isSet;
}

bool OAIInputMessageContent::is_foursquare_id_Valid() const{
    return m_foursquare_id_isValid;
}

QString OAIInputMessageContent::getFoursquareType() const {
    return m_foursquare_type;
}
void OAIInputMessageContent::setFoursquareType(const QString &foursquare_type) {
    m_foursquare_type = foursquare_type;
    m_foursquare_type_isSet = true;
}

bool OAIInputMessageContent::is_foursquare_type_Set() const{
    return m_foursquare_type_isSet;
}

bool OAIInputMessageContent::is_foursquare_type_Valid() const{
    return m_foursquare_type_isValid;
}

QString OAIInputMessageContent::getGooglePlaceId() const {
    return m_google_place_id;
}
void OAIInputMessageContent::setGooglePlaceId(const QString &google_place_id) {
    m_google_place_id = google_place_id;
    m_google_place_id_isSet = true;
}

bool OAIInputMessageContent::is_google_place_id_Set() const{
    return m_google_place_id_isSet;
}

bool OAIInputMessageContent::is_google_place_id_Valid() const{
    return m_google_place_id_isValid;
}

QString OAIInputMessageContent::getGooglePlaceType() const {
    return m_google_place_type;
}
void OAIInputMessageContent::setGooglePlaceType(const QString &google_place_type) {
    m_google_place_type = google_place_type;
    m_google_place_type_isSet = true;
}

bool OAIInputMessageContent::is_google_place_type_Set() const{
    return m_google_place_type_isSet;
}

bool OAIInputMessageContent::is_google_place_type_Valid() const{
    return m_google_place_type_isValid;
}

QString OAIInputMessageContent::getLastName() const {
    return m_last_name;
}
void OAIInputMessageContent::setLastName(const QString &last_name) {
    m_last_name = last_name;
    m_last_name_isSet = true;
}

bool OAIInputMessageContent::is_last_name_Set() const{
    return m_last_name_isSet;
}

bool OAIInputMessageContent::is_last_name_Valid() const{
    return m_last_name_isValid;
}

QString OAIInputMessageContent::getVcard() const {
    return m_vcard;
}
void OAIInputMessageContent::setVcard(const QString &vcard) {
    m_vcard = vcard;
    m_vcard_isSet = true;
}

bool OAIInputMessageContent::is_vcard_Set() const{
    return m_vcard_isSet;
}

bool OAIInputMessageContent::is_vcard_Valid() const{
    return m_vcard_isValid;
}

QString OAIInputMessageContent::getProviderToken() const {
    return m_provider_token;
}
void OAIInputMessageContent::setProviderToken(const QString &provider_token) {
    m_provider_token = provider_token;
    m_provider_token_isSet = true;
}

bool OAIInputMessageContent::is_provider_token_Set() const{
    return m_provider_token_isSet;
}

bool OAIInputMessageContent::is_provider_token_Valid() const{
    return m_provider_token_isValid;
}

qint32 OAIInputMessageContent::getMaxTipAmount() const {
    return m_max_tip_amount;
}
void OAIInputMessageContent::setMaxTipAmount(const qint32 &max_tip_amount) {
    m_max_tip_amount = max_tip_amount;
    m_max_tip_amount_isSet = true;
}

bool OAIInputMessageContent::is_max_tip_amount_Set() const{
    return m_max_tip_amount_isSet;
}

bool OAIInputMessageContent::is_max_tip_amount_Valid() const{
    return m_max_tip_amount_isValid;
}

QList<qint32> OAIInputMessageContent::getSuggestedTipAmounts() const {
    return m_suggested_tip_amounts;
}
void OAIInputMessageContent::setSuggestedTipAmounts(const QList<qint32> &suggested_tip_amounts) {
    m_suggested_tip_amounts = suggested_tip_amounts;
    m_suggested_tip_amounts_isSet = true;
}

bool OAIInputMessageContent::is_suggested_tip_amounts_Set() const{
    return m_suggested_tip_amounts_isSet;
}

bool OAIInputMessageContent::is_suggested_tip_amounts_Valid() const{
    return m_suggested_tip_amounts_isValid;
}

QString OAIInputMessageContent::getProviderData() const {
    return m_provider_data;
}
void OAIInputMessageContent::setProviderData(const QString &provider_data) {
    m_provider_data = provider_data;
    m_provider_data_isSet = true;
}

bool OAIInputMessageContent::is_provider_data_Set() const{
    return m_provider_data_isSet;
}

bool OAIInputMessageContent::is_provider_data_Valid() const{
    return m_provider_data_isValid;
}

QString OAIInputMessageContent::getPhotoUrl() const {
    return m_photo_url;
}
void OAIInputMessageContent::setPhotoUrl(const QString &photo_url) {
    m_photo_url = photo_url;
    m_photo_url_isSet = true;
}

bool OAIInputMessageContent::is_photo_url_Set() const{
    return m_photo_url_isSet;
}

bool OAIInputMessageContent::is_photo_url_Valid() const{
    return m_photo_url_isValid;
}

qint32 OAIInputMessageContent::getPhotoSize() const {
    return m_photo_size;
}
void OAIInputMessageContent::setPhotoSize(const qint32 &photo_size) {
    m_photo_size = photo_size;
    m_photo_size_isSet = true;
}

bool OAIInputMessageContent::is_photo_size_Set() const{
    return m_photo_size_isSet;
}

bool OAIInputMessageContent::is_photo_size_Valid() const{
    return m_photo_size_isValid;
}

qint32 OAIInputMessageContent::getPhotoWidth() const {
    return m_photo_width;
}
void OAIInputMessageContent::setPhotoWidth(const qint32 &photo_width) {
    m_photo_width = photo_width;
    m_photo_width_isSet = true;
}

bool OAIInputMessageContent::is_photo_width_Set() const{
    return m_photo_width_isSet;
}

bool OAIInputMessageContent::is_photo_width_Valid() const{
    return m_photo_width_isValid;
}

qint32 OAIInputMessageContent::getPhotoHeight() const {
    return m_photo_height;
}
void OAIInputMessageContent::setPhotoHeight(const qint32 &photo_height) {
    m_photo_height = photo_height;
    m_photo_height_isSet = true;
}

bool OAIInputMessageContent::is_photo_height_Set() const{
    return m_photo_height_isSet;
}

bool OAIInputMessageContent::is_photo_height_Valid() const{
    return m_photo_height_isValid;
}

bool OAIInputMessageContent::isNeedName() const {
    return m_need_name;
}
void OAIInputMessageContent::setNeedName(const bool &need_name) {
    m_need_name = need_name;
    m_need_name_isSet = true;
}

bool OAIInputMessageContent::is_need_name_Set() const{
    return m_need_name_isSet;
}

bool OAIInputMessageContent::is_need_name_Valid() const{
    return m_need_name_isValid;
}

bool OAIInputMessageContent::isNeedPhoneNumber() const {
    return m_need_phone_number;
}
void OAIInputMessageContent::setNeedPhoneNumber(const bool &need_phone_number) {
    m_need_phone_number = need_phone_number;
    m_need_phone_number_isSet = true;
}

bool OAIInputMessageContent::is_need_phone_number_Set() const{
    return m_need_phone_number_isSet;
}

bool OAIInputMessageContent::is_need_phone_number_Valid() const{
    return m_need_phone_number_isValid;
}

bool OAIInputMessageContent::isNeedEmail() const {
    return m_need_email;
}
void OAIInputMessageContent::setNeedEmail(const bool &need_email) {
    m_need_email = need_email;
    m_need_email_isSet = true;
}

bool OAIInputMessageContent::is_need_email_Set() const{
    return m_need_email_isSet;
}

bool OAIInputMessageContent::is_need_email_Valid() const{
    return m_need_email_isValid;
}

bool OAIInputMessageContent::isNeedShippingAddress() const {
    return m_need_shipping_address;
}
void OAIInputMessageContent::setNeedShippingAddress(const bool &need_shipping_address) {
    m_need_shipping_address = need_shipping_address;
    m_need_shipping_address_isSet = true;
}

bool OAIInputMessageContent::is_need_shipping_address_Set() const{
    return m_need_shipping_address_isSet;
}

bool OAIInputMessageContent::is_need_shipping_address_Valid() const{
    return m_need_shipping_address_isValid;
}

bool OAIInputMessageContent::isSendPhoneNumberToProvider() const {
    return m_send_phone_number_to_provider;
}
void OAIInputMessageContent::setSendPhoneNumberToProvider(const bool &send_phone_number_to_provider) {
    m_send_phone_number_to_provider = send_phone_number_to_provider;
    m_send_phone_number_to_provider_isSet = true;
}

bool OAIInputMessageContent::is_send_phone_number_to_provider_Set() const{
    return m_send_phone_number_to_provider_isSet;
}

bool OAIInputMessageContent::is_send_phone_number_to_provider_Valid() const{
    return m_send_phone_number_to_provider_isValid;
}

bool OAIInputMessageContent::isSendEmailToProvider() const {
    return m_send_email_to_provider;
}
void OAIInputMessageContent::setSendEmailToProvider(const bool &send_email_to_provider) {
    m_send_email_to_provider = send_email_to_provider;
    m_send_email_to_provider_isSet = true;
}

bool OAIInputMessageContent::is_send_email_to_provider_Set() const{
    return m_send_email_to_provider_isSet;
}

bool OAIInputMessageContent::is_send_email_to_provider_Valid() const{
    return m_send_email_to_provider_isValid;
}

bool OAIInputMessageContent::isIsFlexible() const {
    return m_is_flexible;
}
void OAIInputMessageContent::setIsFlexible(const bool &is_flexible) {
    m_is_flexible = is_flexible;
    m_is_flexible_isSet = true;
}

bool OAIInputMessageContent::is_is_flexible_Set() const{
    return m_is_flexible_isSet;
}

bool OAIInputMessageContent::is_is_flexible_Valid() const{
    return m_is_flexible_isValid;
}

bool OAIInputMessageContent::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_message_text_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_latitude_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_longitude_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_title_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_first_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_description_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_payload_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_currency_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_prices.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_parse_mode_isSet) {
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

        if (m_horizontal_accuracy_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_live_period_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_heading_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_proximity_alert_radius_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_foursquare_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_foursquare_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_google_place_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_google_place_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_last_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_vcard_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_provider_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_max_tip_amount_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_suggested_tip_amounts.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (m_provider_data_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_url_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_size_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_width_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_photo_height_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_need_name_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_need_phone_number_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_need_email_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_need_shipping_address_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_send_phone_number_to_provider_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_send_email_to_provider_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_is_flexible_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIInputMessageContent::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_message_text_isValid && m_latitude_isValid && m_longitude_isValid && m_title_isValid && m_address_isValid && m_phone_number_isValid && m_first_name_isValid && m_description_isValid && m_payload_isValid && m_currency_isValid && m_prices_isValid && true;
}

} // namespace tele_rest
