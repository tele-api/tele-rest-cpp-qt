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

#include "OAI_createInvoiceLink_post_request.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAI_createInvoiceLink_post_request::OAI_createInvoiceLink_post_request(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAI_createInvoiceLink_post_request::OAI_createInvoiceLink_post_request() {
    this->initializeModel();
}

OAI_createInvoiceLink_post_request::~OAI_createInvoiceLink_post_request() {}

void OAI_createInvoiceLink_post_request::initializeModel() {

    m_title_isSet = false;
    m_title_isValid = false;

    m_description_isSet = false;
    m_description_isValid = false;

    m_payload_isSet = false;
    m_payload_isValid = false;

    m_currency_isSet = false;
    m_currency_isValid = false;

    m_prices_isSet = false;
    m_prices_isValid = false;

    m_business_connection_id_isSet = false;
    m_business_connection_id_isValid = false;

    m_provider_token_isSet = false;
    m_provider_token_isValid = false;

    m_subscription_period_isSet = false;
    m_subscription_period_isValid = false;

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

void OAI_createInvoiceLink_post_request::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAI_createInvoiceLink_post_request::fromJsonObject(QJsonObject json) {

    m_title_isValid = ::tele_rest::fromJsonValue(m_title, json[QString("title")]);
    m_title_isSet = !json[QString("title")].isNull() && m_title_isValid;

    m_description_isValid = ::tele_rest::fromJsonValue(m_description, json[QString("description")]);
    m_description_isSet = !json[QString("description")].isNull() && m_description_isValid;

    m_payload_isValid = ::tele_rest::fromJsonValue(m_payload, json[QString("payload")]);
    m_payload_isSet = !json[QString("payload")].isNull() && m_payload_isValid;

    m_currency_isValid = ::tele_rest::fromJsonValue(m_currency, json[QString("currency")]);
    m_currency_isSet = !json[QString("currency")].isNull() && m_currency_isValid;

    m_prices_isValid = ::tele_rest::fromJsonValue(m_prices, json[QString("prices")]);
    m_prices_isSet = !json[QString("prices")].isNull() && m_prices_isValid;

    m_business_connection_id_isValid = ::tele_rest::fromJsonValue(m_business_connection_id, json[QString("business_connection_id")]);
    m_business_connection_id_isSet = !json[QString("business_connection_id")].isNull() && m_business_connection_id_isValid;

    m_provider_token_isValid = ::tele_rest::fromJsonValue(m_provider_token, json[QString("provider_token")]);
    m_provider_token_isSet = !json[QString("provider_token")].isNull() && m_provider_token_isValid;

    m_subscription_period_isValid = ::tele_rest::fromJsonValue(m_subscription_period, json[QString("subscription_period")]);
    m_subscription_period_isSet = !json[QString("subscription_period")].isNull() && m_subscription_period_isValid;

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

QString OAI_createInvoiceLink_post_request::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAI_createInvoiceLink_post_request::asJsonObject() const {
    QJsonObject obj;
    if (m_title_isSet) {
        obj.insert(QString("title"), ::tele_rest::toJsonValue(m_title));
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
    if (m_business_connection_id_isSet) {
        obj.insert(QString("business_connection_id"), ::tele_rest::toJsonValue(m_business_connection_id));
    }
    if (m_provider_token_isSet) {
        obj.insert(QString("provider_token"), ::tele_rest::toJsonValue(m_provider_token));
    }
    if (m_subscription_period_isSet) {
        obj.insert(QString("subscription_period"), ::tele_rest::toJsonValue(m_subscription_period));
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

QString OAI_createInvoiceLink_post_request::getTitle() const {
    return m_title;
}
void OAI_createInvoiceLink_post_request::setTitle(const QString &title) {
    m_title = title;
    m_title_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_title_Set() const{
    return m_title_isSet;
}

bool OAI_createInvoiceLink_post_request::is_title_Valid() const{
    return m_title_isValid;
}

QString OAI_createInvoiceLink_post_request::getDescription() const {
    return m_description;
}
void OAI_createInvoiceLink_post_request::setDescription(const QString &description) {
    m_description = description;
    m_description_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_description_Set() const{
    return m_description_isSet;
}

bool OAI_createInvoiceLink_post_request::is_description_Valid() const{
    return m_description_isValid;
}

QString OAI_createInvoiceLink_post_request::getPayload() const {
    return m_payload;
}
void OAI_createInvoiceLink_post_request::setPayload(const QString &payload) {
    m_payload = payload;
    m_payload_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_payload_Set() const{
    return m_payload_isSet;
}

bool OAI_createInvoiceLink_post_request::is_payload_Valid() const{
    return m_payload_isValid;
}

QString OAI_createInvoiceLink_post_request::getCurrency() const {
    return m_currency;
}
void OAI_createInvoiceLink_post_request::setCurrency(const QString &currency) {
    m_currency = currency;
    m_currency_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_currency_Set() const{
    return m_currency_isSet;
}

bool OAI_createInvoiceLink_post_request::is_currency_Valid() const{
    return m_currency_isValid;
}

QList<OAILabeledPrice> OAI_createInvoiceLink_post_request::getPrices() const {
    return m_prices;
}
void OAI_createInvoiceLink_post_request::setPrices(const QList<OAILabeledPrice> &prices) {
    m_prices = prices;
    m_prices_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_prices_Set() const{
    return m_prices_isSet;
}

bool OAI_createInvoiceLink_post_request::is_prices_Valid() const{
    return m_prices_isValid;
}

QString OAI_createInvoiceLink_post_request::getBusinessConnectionId() const {
    return m_business_connection_id;
}
void OAI_createInvoiceLink_post_request::setBusinessConnectionId(const QString &business_connection_id) {
    m_business_connection_id = business_connection_id;
    m_business_connection_id_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_business_connection_id_Set() const{
    return m_business_connection_id_isSet;
}

bool OAI_createInvoiceLink_post_request::is_business_connection_id_Valid() const{
    return m_business_connection_id_isValid;
}

QString OAI_createInvoiceLink_post_request::getProviderToken() const {
    return m_provider_token;
}
void OAI_createInvoiceLink_post_request::setProviderToken(const QString &provider_token) {
    m_provider_token = provider_token;
    m_provider_token_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_provider_token_Set() const{
    return m_provider_token_isSet;
}

bool OAI_createInvoiceLink_post_request::is_provider_token_Valid() const{
    return m_provider_token_isValid;
}

qint32 OAI_createInvoiceLink_post_request::getSubscriptionPeriod() const {
    return m_subscription_period;
}
void OAI_createInvoiceLink_post_request::setSubscriptionPeriod(const qint32 &subscription_period) {
    m_subscription_period = subscription_period;
    m_subscription_period_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_subscription_period_Set() const{
    return m_subscription_period_isSet;
}

bool OAI_createInvoiceLink_post_request::is_subscription_period_Valid() const{
    return m_subscription_period_isValid;
}

qint32 OAI_createInvoiceLink_post_request::getMaxTipAmount() const {
    return m_max_tip_amount;
}
void OAI_createInvoiceLink_post_request::setMaxTipAmount(const qint32 &max_tip_amount) {
    m_max_tip_amount = max_tip_amount;
    m_max_tip_amount_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_max_tip_amount_Set() const{
    return m_max_tip_amount_isSet;
}

bool OAI_createInvoiceLink_post_request::is_max_tip_amount_Valid() const{
    return m_max_tip_amount_isValid;
}

QList<qint32> OAI_createInvoiceLink_post_request::getSuggestedTipAmounts() const {
    return m_suggested_tip_amounts;
}
void OAI_createInvoiceLink_post_request::setSuggestedTipAmounts(const QList<qint32> &suggested_tip_amounts) {
    m_suggested_tip_amounts = suggested_tip_amounts;
    m_suggested_tip_amounts_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_suggested_tip_amounts_Set() const{
    return m_suggested_tip_amounts_isSet;
}

bool OAI_createInvoiceLink_post_request::is_suggested_tip_amounts_Valid() const{
    return m_suggested_tip_amounts_isValid;
}

QString OAI_createInvoiceLink_post_request::getProviderData() const {
    return m_provider_data;
}
void OAI_createInvoiceLink_post_request::setProviderData(const QString &provider_data) {
    m_provider_data = provider_data;
    m_provider_data_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_provider_data_Set() const{
    return m_provider_data_isSet;
}

bool OAI_createInvoiceLink_post_request::is_provider_data_Valid() const{
    return m_provider_data_isValid;
}

QString OAI_createInvoiceLink_post_request::getPhotoUrl() const {
    return m_photo_url;
}
void OAI_createInvoiceLink_post_request::setPhotoUrl(const QString &photo_url) {
    m_photo_url = photo_url;
    m_photo_url_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_photo_url_Set() const{
    return m_photo_url_isSet;
}

bool OAI_createInvoiceLink_post_request::is_photo_url_Valid() const{
    return m_photo_url_isValid;
}

qint32 OAI_createInvoiceLink_post_request::getPhotoSize() const {
    return m_photo_size;
}
void OAI_createInvoiceLink_post_request::setPhotoSize(const qint32 &photo_size) {
    m_photo_size = photo_size;
    m_photo_size_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_photo_size_Set() const{
    return m_photo_size_isSet;
}

bool OAI_createInvoiceLink_post_request::is_photo_size_Valid() const{
    return m_photo_size_isValid;
}

qint32 OAI_createInvoiceLink_post_request::getPhotoWidth() const {
    return m_photo_width;
}
void OAI_createInvoiceLink_post_request::setPhotoWidth(const qint32 &photo_width) {
    m_photo_width = photo_width;
    m_photo_width_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_photo_width_Set() const{
    return m_photo_width_isSet;
}

bool OAI_createInvoiceLink_post_request::is_photo_width_Valid() const{
    return m_photo_width_isValid;
}

qint32 OAI_createInvoiceLink_post_request::getPhotoHeight() const {
    return m_photo_height;
}
void OAI_createInvoiceLink_post_request::setPhotoHeight(const qint32 &photo_height) {
    m_photo_height = photo_height;
    m_photo_height_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_photo_height_Set() const{
    return m_photo_height_isSet;
}

bool OAI_createInvoiceLink_post_request::is_photo_height_Valid() const{
    return m_photo_height_isValid;
}

bool OAI_createInvoiceLink_post_request::isNeedName() const {
    return m_need_name;
}
void OAI_createInvoiceLink_post_request::setNeedName(const bool &need_name) {
    m_need_name = need_name;
    m_need_name_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_need_name_Set() const{
    return m_need_name_isSet;
}

bool OAI_createInvoiceLink_post_request::is_need_name_Valid() const{
    return m_need_name_isValid;
}

bool OAI_createInvoiceLink_post_request::isNeedPhoneNumber() const {
    return m_need_phone_number;
}
void OAI_createInvoiceLink_post_request::setNeedPhoneNumber(const bool &need_phone_number) {
    m_need_phone_number = need_phone_number;
    m_need_phone_number_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_need_phone_number_Set() const{
    return m_need_phone_number_isSet;
}

bool OAI_createInvoiceLink_post_request::is_need_phone_number_Valid() const{
    return m_need_phone_number_isValid;
}

bool OAI_createInvoiceLink_post_request::isNeedEmail() const {
    return m_need_email;
}
void OAI_createInvoiceLink_post_request::setNeedEmail(const bool &need_email) {
    m_need_email = need_email;
    m_need_email_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_need_email_Set() const{
    return m_need_email_isSet;
}

bool OAI_createInvoiceLink_post_request::is_need_email_Valid() const{
    return m_need_email_isValid;
}

bool OAI_createInvoiceLink_post_request::isNeedShippingAddress() const {
    return m_need_shipping_address;
}
void OAI_createInvoiceLink_post_request::setNeedShippingAddress(const bool &need_shipping_address) {
    m_need_shipping_address = need_shipping_address;
    m_need_shipping_address_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_need_shipping_address_Set() const{
    return m_need_shipping_address_isSet;
}

bool OAI_createInvoiceLink_post_request::is_need_shipping_address_Valid() const{
    return m_need_shipping_address_isValid;
}

bool OAI_createInvoiceLink_post_request::isSendPhoneNumberToProvider() const {
    return m_send_phone_number_to_provider;
}
void OAI_createInvoiceLink_post_request::setSendPhoneNumberToProvider(const bool &send_phone_number_to_provider) {
    m_send_phone_number_to_provider = send_phone_number_to_provider;
    m_send_phone_number_to_provider_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_send_phone_number_to_provider_Set() const{
    return m_send_phone_number_to_provider_isSet;
}

bool OAI_createInvoiceLink_post_request::is_send_phone_number_to_provider_Valid() const{
    return m_send_phone_number_to_provider_isValid;
}

bool OAI_createInvoiceLink_post_request::isSendEmailToProvider() const {
    return m_send_email_to_provider;
}
void OAI_createInvoiceLink_post_request::setSendEmailToProvider(const bool &send_email_to_provider) {
    m_send_email_to_provider = send_email_to_provider;
    m_send_email_to_provider_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_send_email_to_provider_Set() const{
    return m_send_email_to_provider_isSet;
}

bool OAI_createInvoiceLink_post_request::is_send_email_to_provider_Valid() const{
    return m_send_email_to_provider_isValid;
}

bool OAI_createInvoiceLink_post_request::isIsFlexible() const {
    return m_is_flexible;
}
void OAI_createInvoiceLink_post_request::setIsFlexible(const bool &is_flexible) {
    m_is_flexible = is_flexible;
    m_is_flexible_isSet = true;
}

bool OAI_createInvoiceLink_post_request::is_is_flexible_Set() const{
    return m_is_flexible_isSet;
}

bool OAI_createInvoiceLink_post_request::is_is_flexible_Valid() const{
    return m_is_flexible_isValid;
}

bool OAI_createInvoiceLink_post_request::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_title_isSet) {
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

        if (m_business_connection_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_provider_token_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_subscription_period_isSet) {
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

bool OAI_createInvoiceLink_post_request::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_title_isValid && m_description_isValid && m_payload_isValid && m_currency_isValid && m_prices_isValid && true;
}

} // namespace tele_rest
