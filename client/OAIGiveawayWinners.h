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

/*
 * OAIGiveawayWinners.h
 *
 * This object represents a message about the completion of a giveaway with public winners.
 */

#ifndef OAIGiveawayWinners_H
#define OAIGiveawayWinners_H

#include <QJsonObject>

#include "OAIChat.h"
#include "OAIUser.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIChat;
class OAIUser;

class OAIGiveawayWinners : public OAIObject {
public:
    OAIGiveawayWinners();
    OAIGiveawayWinners(QString json);
    ~OAIGiveawayWinners() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIChat getChat() const;
    void setChat(const OAIChat &chat);
    bool is_chat_Set() const;
    bool is_chat_Valid() const;

    qint32 getGiveawayMessageId() const;
    void setGiveawayMessageId(const qint32 &giveaway_message_id);
    bool is_giveaway_message_id_Set() const;
    bool is_giveaway_message_id_Valid() const;

    qint32 getWinnersSelectionDate() const;
    void setWinnersSelectionDate(const qint32 &winners_selection_date);
    bool is_winners_selection_date_Set() const;
    bool is_winners_selection_date_Valid() const;

    qint32 getWinnerCount() const;
    void setWinnerCount(const qint32 &winner_count);
    bool is_winner_count_Set() const;
    bool is_winner_count_Valid() const;

    QList<OAIUser> getWinners() const;
    void setWinners(const QList<OAIUser> &winners);
    bool is_winners_Set() const;
    bool is_winners_Valid() const;

    qint32 getAdditionalChatCount() const;
    void setAdditionalChatCount(const qint32 &additional_chat_count);
    bool is_additional_chat_count_Set() const;
    bool is_additional_chat_count_Valid() const;

    qint32 getPrizeStarCount() const;
    void setPrizeStarCount(const qint32 &prize_star_count);
    bool is_prize_star_count_Set() const;
    bool is_prize_star_count_Valid() const;

    qint32 getPremiumSubscriptionMonthCount() const;
    void setPremiumSubscriptionMonthCount(const qint32 &premium_subscription_month_count);
    bool is_premium_subscription_month_count_Set() const;
    bool is_premium_subscription_month_count_Valid() const;

    qint32 getUnclaimedPrizeCount() const;
    void setUnclaimedPrizeCount(const qint32 &unclaimed_prize_count);
    bool is_unclaimed_prize_count_Set() const;
    bool is_unclaimed_prize_count_Valid() const;

    bool isOnlyNewMembers() const;
    void setOnlyNewMembers(const bool &only_new_members);
    bool is_only_new_members_Set() const;
    bool is_only_new_members_Valid() const;

    bool isWasRefunded() const;
    void setWasRefunded(const bool &was_refunded);
    bool is_was_refunded_Set() const;
    bool is_was_refunded_Valid() const;

    QString getPrizeDescription() const;
    void setPrizeDescription(const QString &prize_description);
    bool is_prize_description_Set() const;
    bool is_prize_description_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIChat m_chat;
    bool m_chat_isSet;
    bool m_chat_isValid;

    qint32 m_giveaway_message_id;
    bool m_giveaway_message_id_isSet;
    bool m_giveaway_message_id_isValid;

    qint32 m_winners_selection_date;
    bool m_winners_selection_date_isSet;
    bool m_winners_selection_date_isValid;

    qint32 m_winner_count;
    bool m_winner_count_isSet;
    bool m_winner_count_isValid;

    QList<OAIUser> m_winners;
    bool m_winners_isSet;
    bool m_winners_isValid;

    qint32 m_additional_chat_count;
    bool m_additional_chat_count_isSet;
    bool m_additional_chat_count_isValid;

    qint32 m_prize_star_count;
    bool m_prize_star_count_isSet;
    bool m_prize_star_count_isValid;

    qint32 m_premium_subscription_month_count;
    bool m_premium_subscription_month_count_isSet;
    bool m_premium_subscription_month_count_isValid;

    qint32 m_unclaimed_prize_count;
    bool m_unclaimed_prize_count_isSet;
    bool m_unclaimed_prize_count_isValid;

    bool m_only_new_members;
    bool m_only_new_members_isSet;
    bool m_only_new_members_isValid;

    bool m_was_refunded;
    bool m_was_refunded_isSet;
    bool m_was_refunded_isValid;

    QString m_prize_description;
    bool m_prize_description_isSet;
    bool m_prize_description_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIGiveawayWinners)

#endif // OAIGiveawayWinners_H
